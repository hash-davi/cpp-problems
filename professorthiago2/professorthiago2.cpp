#include <bits/stdc++.h>

using namespace std;

int main(){
    int N, i;
    cin >> N;
    vector<int> arr(N,1);


    for(i=1;i<=N;i++){
        arr[i-1] = N/i;
    }

    for(i=0;i<N;i++){
        if(arr[i]%2!=0){
            cout
                << i+1
                << " ";
        }
    }

	return 0;
}
