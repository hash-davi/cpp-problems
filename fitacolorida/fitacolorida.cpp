#include <bits/stdc++.h>
#define ll long long
#define pb push_back

using namespace std;

int main(){
    int N, i, j, count1=0, count2=0;
    bool zeroIdaEncontrado=false, zeroVoltaEncontrado=false;
    cin >> N;
    vector<int> quadrados(N, 0);

    for(i=0;i<N;i++){
        cin >> quadrados[i];
    }

    for(i=0;i<N;i++){
        for(j=i;j<N;j++){
            if(quadrados[j]==0){
                zeroIdaEncontrado=true;
                break;
            }
            else{
                count1++;
            }
        }
        if(count1>=9){
            count1=9;
        }
        if(i!=0){
            for(j=i;j>=0;j--){
                if(quadrados[j]==0){
                    zeroVoltaEncontrado=true;
                    break;
                }
                else{
                    count2++;
                }
            }
            if(count2>=9){
                count2=9;
            }
            if(count1>0 && count2>0){
                if(zeroIdaEncontrado && zeroVoltaEncontrado){
                    quadrados[i]=min(count1,count2);
                    count1=count2=0;
                    zeroIdaEncontrado=false;
                    zeroVoltaEncontrado=false;
                }
                else if (!zeroIdaEncontrado && zeroVoltaEncontrado){
                    quadrados[i]=count2;
                    count1=count2=0;
                    zeroVoltaEncontrado=false;
                }
                else if (!zeroVoltaEncontrado && zeroIdaEncontrado) {
                    quadrados[i]=count1;
                    count1=count2=0;
                    zeroIdaEncontrado=false;
                }
            }
        }
        else{
            quadrados[i]=count1;
            count1=count2=0;
            zeroIdaEncontrado=false;
        }
    }

    for(i=0;i<N;i++){
        cout << quadrados[i] << " ";
    }

	return 0;
}
