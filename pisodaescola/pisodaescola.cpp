#include <iostream>

using namespace std;

int main(){
    int L,C;
    cin >> L >> C;
    int numLajotaUm = (L*C)+(L-1)*(C-1);
    int numLajotaDois = 2*(L+C-2);

    cout << numLajotaUm << "\n" << numLajotaDois;

	return 0;
}
