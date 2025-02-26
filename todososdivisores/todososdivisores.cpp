#include <iostream>

using namespace std;

int main(){
    int X, n;
    cin >> X;

    for(int i=1;i<X+1;i++){
        if(X%i==0){
            cout << i << " ";
        }
    }

    return 0;
}
