#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    char operation;
    double a,b;

    cin >> operation;
    cin >> a >> b;

    switch(operation){
        case 'M':
            cout << fixed << setprecision(2) << a*b;
            break;
        case 'D':
            cout << fixed << setprecision(2) << a/b;
    }

	return 0;
}
