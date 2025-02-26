#include <iostream>

using namespace std;

int main(){
    int A, B, C;
    cin >> A >> B >> C;

    bool aliceVence = (A != B && A != C);
    bool betoVence = (B != A && B != C);
    bool claraVence = (C != A && C != B);

    if(aliceVence){
        cout << "A";
    }
    else if(betoVence){
        cout << "B";
    }
    else if(claraVence){
        cout << "C";
    }
    else{
        cout << "*";
    }

	return 0;
}
