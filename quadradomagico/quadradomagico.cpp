#include <bits/stdc++.h>
#define vi vector<int>
#define vii vector<vi>

using namespace std;

int main(){
    int N,i,j;
    bool magico=true;
    cin >> N;
    vii quadradoMagico(N, vi(N,0));

    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            cin >> quadradoMagico[i][j];
        }
    }

    int soma = accumulate(quadradoMagico[0].begin(), quadradoMagico[0].end(), 0);
    int auxSoma;
    for(i=1;i<N;i++){
        auxSoma = accumulate(quadradoMagico[i].begin(), quadradoMagico[i].end(), 0);
        if(auxSoma!=soma){
            magico=false;
            break;
        }
    }

    if(magico){
        int aux=0;
        for(i=0;i<N;i++){
            for(j=0;j<N;j++){
                aux+=quadradoMagico[j][i];
            }
            if(aux==soma){
                aux=0;
            }
            else{
                magico=false;
                break;
            }
        }
        aux=0;
        for(i=0;i<N;i++){
            aux+=quadradoMagico[i][i];
        }
        if(aux!=soma){
            magico=false;
        }
        aux=0,j=0;
        for(i=N-1;i>=0;i--){
            aux+=quadradoMagico[i][j];
            j++;
        }
        if(aux!=soma){
            magico=false;
        }
    }

    cout << (magico ? soma : -1);

	return 0;
}
