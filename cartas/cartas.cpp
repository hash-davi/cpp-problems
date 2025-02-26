#include <iostream>

using namespace std;

int main(){
    int cartas[3];

    for(int i=0;i<3;i++){
        cin >> cartas[i];
    }

    int aux=cartas[0];
    for(int i=1;i<3;i++){
        if(aux==cartas[i]){
            if(i>=2){
                aux=cartas[i-1];
                break;
            }
            else{
                aux=cartas[i+1];
                break;
            }
        }
        else{
            continue;
        }
    }

    cout << aux;

	return 0;
}
