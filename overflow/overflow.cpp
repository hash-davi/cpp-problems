#include <bits/stdc++.h>
#define ll long long
#define pb push_back

using namespace std;

bool verificaSoma(int _n, int _p, int _q);
bool verificaMultiplicacao(int _n, int _p, int _q);

int main(){
    int N,P,Q;
    char C;
    bool overflow=false;
    cin >> N;
    cin >> P >> C >> Q;

    switch(C){
        case '+':
            overflow = verificaSoma(N,P,Q);
            break;
        case '*':
            overflow = verificaMultiplicacao(N,P,Q);
            break;
    }

    cout << (overflow ? "OK" : "OVERFLOW");

	return 0;
}

bool verificaSoma(int _n, int _p, int _q){
    return (_p + _q) <= _n;
}

bool verificaMultiplicacao(int _n, int _p, int _q){
    return (_p * _q) <= _n;
}
