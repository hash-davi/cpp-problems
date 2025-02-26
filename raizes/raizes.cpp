#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    unsigned int N, i;
    cin >> N;
    float numeros[N];

    for(i=0;i<N;i++){
        cin >> numeros[i];
    }

    for(i=0;i<N;i++){
        cout << fixed << setprecision(4) << pow(numeros[i], 0.5) << endl;
    }

	return 0;
}
