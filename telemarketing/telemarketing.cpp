#include <bits/stdc++.h>
#define ll long long
#define pb push_back

using namespace std;

bool teste(vector<int> ex);

int main(){
    int N, L;
    int i, j;
    cin >> N >> L;
    priority_queue<int, vector<int>, greater<int>> vendedoresInativos;
    vector<int> ligacoesPendentes(L, 0);
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> vendedorLigacaoAtivos;
    vector<int> vendedores(N, 0);

    for(i=0;i<L;i++){
        cin >> ligacoesPendentes[i];
    }

    for(i=0;i<N;i++){
        vendedoresInativos.push(i+1);
    }

    int frenteLigacao=0, topoVendedor=0;
    for(i=1;!teste(ligacoesPendentes);i++){
        frenteLigacao=ligacoesPendentes.front();
        topoVendedor=vendedoresInativos.top();

        vendedorLigacaoAtivos.push(make_pair(frenteLigacao,topoVendedor));
        vendedores[topoVendedor-1]++;

        ligacoesPendentes.erase(ligacoesPendentes.begin());
        vendedoresInativos.pop();
        if(vendedoresInativos.empty()){
            vendedoresInativos.push(vendedorLigacaoAtivos.top().second);
            vendedorLigacaoAtivos.pop();
        }
    }

    for(i=0;i<N;i++){
        cout << i+1 << " " << vendedores[i] << "\n";
    }

	return 0;
}

bool teste(vector<int> ex){
    if(ex.empty()){
        return true;
    }
    else{
        return false;
    }
}
