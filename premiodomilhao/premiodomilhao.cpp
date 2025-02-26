#include <iostream>

using namespace std;

int main(){
    int N;
    cin >> N;
    int A[N], contador, milhao;

    for(int i=0;i<N;i++){
        cin >> A[i];
    }

    for(int i=0;i<N;i++){
        milhao+=A[i];
        contador++;
        if(milhao>=1000000){
            break;
        }
    }

    cout << contador;

    return 0;
}
