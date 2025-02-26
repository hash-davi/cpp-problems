#include <bits/stdc++.h>
#define ll long long
#define pb push_back

using namespace std;

int main(){
    int numero, i, j;
    // int k, somaColuna=0, somaLinha=0, maiorSoma=0;
    cin >> numero;
    vector<vector<int>> matriz(numero, vector<int>(numero, 0));

    for(i=0;i<numero;i++){
        for(j=0;j<numero;j++){
            cin >> matriz[i][j];
        }
    }

    // */
    vector<int> columnSums(numero, 0);
    for (i=0;i<numero;i++) {
        for (j=0;j<numero;j++) {
            columnSums[i] += matriz[j][i];
        }
    }

    int auxSomaLinha=0;
    int maiorSomaLinha=0;
    int auxMaiorTotal=0;
    int maiorTotal=0;
    for(i=0;i<numero;i++){
        auxSomaLinha=accumulate(matriz[i].begin(), matriz[i].end(), 0);
        maiorSomaLinha=max(maiorSomaLinha, auxSomaLinha);
        if (maiorSomaLinha > auxSomaLinha) {
            continue;
        }
        else {
            for (j=0;j<numero;j++) {
                auxMaiorTotal=max(auxMaiorTotal, (columnSums[j]+maiorSomaLinha)-(2*matriz[i][j]));
            }
            maiorTotal=max(auxMaiorTotal, maiorTotal);
            auxMaiorTotal=0;
        }
    }

    cout << maiorTotal << endl;

    return 0;
    // */

    /*
    // for(i=0;i<numero;i++){
    //     for(j=0;j<numero;j++){
    //         for(k=0;k<numero;k++){
    //             if(k==j){
    //                 continue;
    //             }
    //             else{
    //                 somaLinha+=matriz[i][k];
    //             }
    //         }
    //         for(k=0;k<numero;k++){
    //             if(k==i){
    //                 continue;
    //             }
    //             else{
    //                 somaColuna+=matriz[k][j];
    //             }
    //         }
    //         maiorSoma=max(maiorSoma, somaColuna+somaLinha);
    //         somaLinha=0;
    //         somaColuna=0;
    //     }
    // }
    */

    /*
    for(i=0;i<numero;i++){
        for(j=0;j<numero;j++){
            somaLinha=accumulate(matriz[i].begin(), matriz[i].end(), 0)-matriz[i][j];
            for(k=0;k<numero;k++) {
                if(k==i){
                    continue;
                }
                else{
                    somaColuna+=matriz[k][j];
                }
            }
            maiorSoma=max(maiorSoma,somaLinha+somaColuna);
            somaColuna=0;
        }
    }

    cout << maiorSoma;

    */

    /*
    pair<int,int> somaL;
    //int auxSomaL=0;
    pair<int,int> somaC;
    int auxSomaC=0;
    int auxFirstSomaL=0;
    int auxFirstSomaC=0;
    for(i=0;i<numero;i++){
        auxFirstSomaL=somaL.first;
        somaL.first = max(somaL.first, accumulate(matriz[i].begin(), matriz[i].end(), 0));
        if (somaL.first>auxFirstSomaL) {
            somaL.second=i;
        }
    }

    for(j=0;j<numero;j++) {
        for(i=0;i<numero;i++) {
            auxSomaC+=matriz[i][j];
        }
        auxFirstSomaC=somaC.first;
        somaC.first=max(somaC.first, auxSomaC);
        if (somaC.first>auxFirstSomaC) {
            somaC.second=j;
        }
        auxSomaC=0;
    }

    int total=(somaL.first+somaC.first)-2*(matriz[somaL.second][somaC.second]);

    cout << total << endl;
    */

	return 0;
}

/*
void somaDosElementosDeCadaLinha(){
    int numero, i, j, somaColuna=0, somaLinha=0;
    cin >> numero;
    int matriz[2][numero];
    vector<int> auxColuna(numero, 0);
    vector<int> auxLinha(2, 0);

    for(i=0;i<2;i++){
        for(j=0;j<numero;j++){
            somaLinha+=matriz[i][j];
        }
        auxLinha[i]=somaLinha;
        somaLinha=0;
    }

    int maiorSomaLinha = max(auxLinha[0], auxLinha[1]);

    cout << maiorSomaLinha << endl;
}
*/
