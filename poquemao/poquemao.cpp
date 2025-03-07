#include <bits/stdc++.h>

using namespace std;

int verificaPoquemao();

int main(){

    cout << verificaPoquemao();

	return 0;
}

int verificaPoquemao() {
    int N{};
    array<int, 3> poquemaos;

    cin >> N;

    for(int i=0;i<3;i++){
        cin >> poquemaos[i];
    }

    int somaTresatres = accumulate(poquemaos.begin(), poquemaos.end(), 0);
    priority_queue<int> somasDoisadois;

    for(int i=0;i<2;i++){
        for(int j=i+1;j<3;j++){
            somasDoisadois.push(poquemaos[i]+poquemaos[j]);
        }
    }

    if(N>=somaTresatres){
        return 3;
    }
    else {
        for(int i=0;i<3;i++){
            if(N>=somasDoisadois.top()){
                return 2;
            }
            else{
                somasDoisadois.pop();
            }
        }
        for(auto x: poquemaos){
            if(N>=x){
                return 1;
            }
        }
        return 0;
    }
}
