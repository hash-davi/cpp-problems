#include <iostream>

using namespace std;

int main(){
    long long N;
    cin >> N;

    if(N == 1 || N == 2){
        cout << "N";
    }
    else{
        for(long long i = 2; i*i <= N ; i++){
            if(N % i == 0){
                cout << "S";
                return 0;
            }
        }
        cout << "N";
    }
    return 0;
}

