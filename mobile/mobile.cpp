#include <bits/stdc++.h>

using namespace std;

bool verificarMobile();

int main(){

    cout << (verificarMobile() ? 'S' : 'N');

	return 0;
}

bool verificarMobile() {
    int A,B,C,D;
    cin >> A >> B >> C >> D;

    if((A==(B+C+D))&&(D==(B+C))&&B==C){
        return true;
    } else {
        return false;
    }
}
