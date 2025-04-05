#include <iostream>

using namespace std;

int main(){
    int N{}, T{}, A{};
    cin >> N >> T >> A;

    int notAccounted = N - (T + A);

    if((T + notAccounted < A) || (A + notAccounted < T)) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }


	return 0;
}
