#include <bits/stdc++.h>

using namespace std;

int main(){
    int N, i;
    cin >> N;
    vector<int> numeros(N, 0);

    for(i=0;i<N;i++){
        cin >> numeros[i];
    }

    int count=1;
    priority_queue<int> counters;
    for(i=1;i<N;i++){
        if(numeros[i]==numeros[i-1]){
            count++;
        }
        else{
            counters.push(count);
            count=1;
        }
    }
    counters.push(count);

    cout << counters.top();

	return 0;
}
