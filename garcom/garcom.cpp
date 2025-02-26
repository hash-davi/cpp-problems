#include <iostream>

using namespace std;

int main(){
    int N, i, j, copos=0;
    cin >> N;
    int matriz[N][2];

    for(i=0;i<N;i++){
        for(j=0;j<2;j++){
            cin >> matriz[i][j];
        }
    }

    for(i=0; i<N; i++){
        if(matriz[i][0]>matriz[i][1]){
            copos+=matriz[i][1];
        }
        else{
            continue;
        }
    }

    cout << copos;

    return 0;
}
