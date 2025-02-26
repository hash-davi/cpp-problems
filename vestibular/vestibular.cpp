#include <iostream>

using namespace std;

int main(){
    int N, count=0;
    cin >> N;
    char gabarito[N];
    char resposta[N];

    for(int i=0;i<N;i++){
        cin >> gabarito[i];
    }
    for(int i=0;i<N;i++){
        cin >> resposta[i];
    }
    //cin >> gabarito;
    //cin >> resposta;

    for(int i=0;i<N;i++){
        if(gabarito[i]==resposta[i]){
            count++;
        }
    }

    cout << count;

	return 0;
}
