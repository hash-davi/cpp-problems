#include <bits/stdc++.h>

using namespace std;

void loopMatrix(int linhas, int colunas, int **matrix){
    for(int i=0;i<linhas;i++){
        for(int j=0;j<colunas;j++){
            cout << matrix[i][j];
        }
    }
}

int main(){
    int N, i, j;
    cin >> N;
    int matriz[N][N];
    int soma[2][N], auxSoma;

    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            cin >> matriz[i][j];
        }
    }



    for(i=0;i<2;i++){
        for(j=0;j<N;j++){
            cout << soma[i][j] << " ";
        }
        cout << "\n";
    }

	return 0;
}
