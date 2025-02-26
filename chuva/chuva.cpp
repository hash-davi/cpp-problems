#include <bits/stdc++.h>
#define ll long long
#define pb push_back

using namespace std;

int main(){
    int N,i;
    cin >> N;
    int vetor[N];

    for(i=0;i<N;i++){
        cin >> vetor[i];
    }

    int auxMaiorSec=0, maiorSec=0, auxCount=0, totalCount=0;
    for(i=0;i<N;i++){
        auxMaiorSec=min(auxMaiorSec,maiorSec);
        maiorSec=max(maiorSec, vetor[i]);
        if (i==0) {
            auxMaiorSec=maiorSec;
        }
        else if ((i>=1) && ((vetor[i]<maiorSec && vetor[i]<auxMaiorSec) || (vetor[i]<vetor[i-1] && vetor[i]<vetor[i+1]))) {
            auxCount++;
        }
        else {
            totalCount+=auxCount;
            auxCount=0;
        }
    }

    cout << totalCount;

	return 0;
}
