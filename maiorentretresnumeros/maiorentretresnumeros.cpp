#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;

int maiorElementoDoVector(vi par_vector);

int main(){
    vi presentes(3,0);

    for(int i=0;i<3;i++){
        cin >> presentes[i];
    }

    cout << maiorElementoDoVector(presentes);

	return 0;
}

int maiorElementoDoVector(vi par_vector){
    int aux{ par_vector[0] };

    for(long long unsigned i=1;i<par_vector.size();i++){
        if(aux<par_vector[i]){
            aux=par_vector[i];
        }
    }

    return aux;
}
