#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

//double pot(double base, double expoente);

int main(){
    double x, y;
    cin >> x >> y;
    //double potencia = pot(x, y);

    cout << fixed << setprecision(4) << pow(x,y);

    //printf("%.4f", potencia);

    return 0;
}

//double pot(double base, double expoente){
    //double resultado = base;
    //if(base!=0 && expoente==0){
        //return 1;
    //}
    //for(int i=0;i<static_cast<int>(expoente-1);i++){
        //resultado *= base;
    //}
    //return resultado;
//}
