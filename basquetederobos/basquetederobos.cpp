#include <iostream>

using namespace std;

int main(){
    int D;
    cin >> D;

    if(D<=800){
        cout << 1;
    }
    else if(D<=1400){
        cout << 2;
    }
    else{
        cout << 3;
    }

	return 0;
}
