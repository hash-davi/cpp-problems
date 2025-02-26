#include <iostream>

#define sq(a) (a)*(a)
// #define ull unsigned long long

using namespace std;

 /*
int numDivisors(int _number){
    vector<int> divisors(1,0);
    int count=0;

    if(_number==1){
        return 1;
    }
    else{
        for(int i=1;i<=_number/2;i++){
            if(_number%i==0){
                divisors.resize(++count);
                divisors.push_back(i);
            }
        }

        int vectorSize = static_cast<int>(divisors.size());
        return vectorSize;
    }
}
 */

 /*
int numDivisors(int n){
    int count=1;

    for(int i=1;i<=n/2;i++){
        if(n%i==0){
            count++;
        }
    }
    return count;
}
 */

void perfectSquares(int n){
    int i=1;
    while(sq(i)<=n){
        cout << sq(i) << " ";
        i++;
    }
}

int main(){
    int N, i;
    cin >> N;
    //vector<int> arr(N,0);
    //int arr[N];

    perfectSquares(N);

    /*
    for(i=1;i<=N;i++){
        arr[i-1]=numDivisors(i);
    }

    for(i=0;i<N;i++){
        if(arr[i]%2!=0){
            cout << i+1 << " ";
        }
    }
    */

	return 0;
}
