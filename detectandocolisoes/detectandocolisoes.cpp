#include <iostream>

using namespace std;

int main(){
    int i, j, pontos[2][4];

    for(i=0;i<2;i++){
        for(j=0;j<4;j++){
            cin >> pontos[i][j];
        }
    }
    // 1 1 2 2 [0][0] [0][1] [0][2] [0][3]
    // 0 0 3 3 [1][0] [1][1] [1][2] [1][3]
    if((pontos[1][0]>=pontos[0][0] && pontos[1][0]<= pontos[0][2]) || (pontos[0][0]>=pontos[1][0] && pontos[0][0]<=pontos[1][2])){
        cout << 1;
    }
    else{
        cout << 0;
    }

	return 0;
}
