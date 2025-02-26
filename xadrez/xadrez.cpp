#include <iostream>

using namespace std;

int main(){
    int L,C;
    cin >> L >> C;

    if(L%2==0 && C%2==0){
        cout << 1;
    }
    else if(L%2!=0 && C%2==0){
        cout << 0;
    }
    else if(L%2==0 && C%2!=0){
        cout << 0;
    }
    else{
        cout << 1;
    }

	return 0;
}
