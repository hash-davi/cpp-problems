#include <iostream>

using namespace std;

int main(){
    int N, i, count=0;
    cin >> N;
    int vetor[N];

    for(i=0;i<N;i++){
        cin >> vetor[i];
    }

    for(i=0;i<N-2;i++){
        if(vetor[i]==1 && vetor[i+1]==0 && vetor[i+2]==0){
            count++;
        }
    }

    cout << count;

	return 0;
}
