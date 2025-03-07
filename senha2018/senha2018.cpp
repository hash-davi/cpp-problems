#include <bits/stdc++.h>

using namespace std;

int requerSenhas();

int main(){

    cout << requerSenhas();

	return 0;
}

int requerSenhas() {
    unsigned int counter{}, senha{};

    while(senha!=2018){
        cin >> senha;
        counter++;
    }
    return counter-1;
}
