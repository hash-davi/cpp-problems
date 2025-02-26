#include <iostream>

using namespace std;

int main(){
    int V, P, i, j=0;
    cin >> V >> P;
    int valorParcelas[P];
    int resto = V%P;

    for(i=0;i<P;i++){
        valorParcelas[i]=V/P;
    }

    for(i=resto;i>0;i--){
        valorParcelas[j]++;
        j++;
    }

    for(i=0;i<P;i++){
        cout << valorParcelas[i] << endl;
    }

	return 0;
}
