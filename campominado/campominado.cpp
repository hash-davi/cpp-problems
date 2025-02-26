#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,i,j;
    cin >> N;
    vector<int> campo(N, 0);
    vector<int> bombas(N, 0);

    for(i=0;i<N;i++){
        cin >> campo[i];
    }

    int count=0;
    for(i=0;i<N;i++){
        if(i>=N-1){
            for(j=i-1;j<i+1;j++){
                if(campo[j]==1){
                    count++;
                }
            }
            bombas[i]=count;
            count=0;
        }
        else if(i!=0){
            for(j=i-1;j<i+2;j++){
                if(campo[j]==1){
                    count++;
                }
            }
            bombas[i]=count;
            count=0;
        }
        else{
            for(j=i;j<i+2;j++){
                if(campo[j]==1){
                    count++;
                }
            }
            bombas[i]=count;
            count=0;
        }
    }

    for(i=0;i<N;i++){
        cout << bombas[i] << "\n";
    }

	return 0;
}
