#include <iostream>

using namespace std;

int main() {
    int N,i,j;
    cin >> N;
    int algarismos[10] = {};
    char numeros[N][100];

    for(i=0;i<N;i++){
        cin >> numeros[i];
    }

    for(i=0;i<N;i++){
        for(j=0;numeros[i][j]!='\0';j++){
            switch(numeros[i][j]){
                case '0':
                    algarismos[0]++;
                    break;
                case '1':
                    algarismos[1]++;
                    break;
                case '2':
                    algarismos[2]++;
                    break;
                case '3':
                    algarismos[3]++;
                    break;
                case '4':
                    algarismos[4]++;
                    break;
                case '5':
                    algarismos[5]++;
                    break;
                case '6':
                    algarismos[6]++;
                    break;
                case '7':
                    algarismos[7]++;
                    break;
                case '8':
                    algarismos[8]++;
                    break;
                case '9':
                    algarismos[9]++;
                    break;
            }
        }
    }

    for(i=0;i<10;i++){
        cout << i << " - " << algarismos[i] << endl;
    }

    return 0;
}
