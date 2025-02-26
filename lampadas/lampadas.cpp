#include <iostream>

using namespace std;

int main(){
    int N;
    cin >> N;
    int lista[N];
    bool lampadaA=0, lampadaB=0;


    for(int i=0;i<N;i++){
        cin >> lista[i];
    }

    for(int i=0;i<N;i++){
        switch(lista[i]){
        case 1:
            lampadaA=!lampadaA;
            continue;
        case 2:
            lampadaA=!lampadaA;
            lampadaB=!lampadaB;
            continue;
        }
    }

    cout << lampadaA << endl << lampadaB;

    return 0;
}
