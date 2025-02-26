#include <bits/stdc++.h>
#define ll long long
#define pb push_back

using namespace std;

int main(){
    int N,i,j;
    cin >> N;
    vector<int> sequencia(N, 0);

    for(i=0;i<N;i++){
        cin >> sequencia[i];
    }

    /* 5
       1 -7 1000 2 4
    */

    bool aux;
    do{
        aux=false;
        for(j=0;j<N-1;j++){
            if(sequencia[j]>sequencia[j+1]){
                swap(sequencia[j], sequencia[j+1]);
                aux=true;
            }
        }
    }while(aux);

    for(i=0;i<N;i++){
        cout << sequencia[i] << " ";
    }

	return 0;
}
