#include <bits/stdc++.h>
#define vi vector<int>

using namespace std;

int main(){
    int N,M,i;
    bool achou=false;
    cin >> N;
    vi fila(N,0);

    for(i=0;i<N;i++){
        cin >> fila[i];
    }

    cin >> M;
    vi saida(M,0);

    for(i=0;i<M;i++){
        cin >> saida[i];
    }

    for(i=0;i<M;i++){
        for(int j=0;!achou;j++){
            if(saida[i]==fila[j]){
                fila.erase(find(fila.begin(), fila.end(), saida[i]));
                achou=true;
            }
        }
        achou=false;
    }

    for(auto x: fila){
        cout << x << " ";
    }

	return 0;
}
