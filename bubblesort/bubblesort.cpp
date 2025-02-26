#include <iostream>

using namespace std;

int main(){
    int array[5], i, j, aux;

    for(i=0;i<5;i++){
        cin >> array[i];
    }

    for(i=0;i<5;i++){
        for(j=0;j<4;j++){
            if(array[j]>array[j+1]){
                aux=array[j];
                array[j]=array[j+1];
                array[j+1]=aux;
            }
        }
    }

    for(i=0;i<5;i++){
        cout << array[i] << " ";
    }

	return 0;
}
