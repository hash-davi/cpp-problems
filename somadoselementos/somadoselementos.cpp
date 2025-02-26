#include <bits/stdc++.h>

using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> elementos(N, 0);

    for(int i=0;i<N;i++){
        cin >> elementos[i];
    }

    cout << accumulate(elementos.begin(), elementos.end(), 0);

	return 0;
}
