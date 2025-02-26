#include <iostream>

using namespace std;

int main(){
    int c1, c2, c3;
    cin >> c1;
    cin >> c2;
    cin >> c3;

    if((c1>=c2 && c1<=c3) || (c1>=c3 && c1<=c2)){
        cout << c1;
    }
    else if((c2>=c1 && c2<=c3) || (c2>=c3 && c2<=c1)){
        cout << c2;
    }
    else{
        cout << c3;
    }

	return 0;
}
