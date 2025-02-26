#include <iostream>

using namespace std;

int max(int a,int b, int c);
int median(int a,int b,int c);
int min(int a,int b,int c);

int main(){
    int tempo1, tempo2, tempo3;
    cin >> tempo1 >> tempo2 >> tempo3;

    cout << min(tempo1,tempo2,tempo3) << endl << median(tempo1,tempo2,tempo3) << endl << max(tempo1,tempo2,tempo3) << endl;

	return 0;
}

int max(int a, int b, int c){
    if(a>b && a>c){
        return 1;
    }
    else if(b>a && b>c){
        return 2;
    }
    else{
        return 3;
    }
}

int median(int a, int b, int c){
    if((a>b && b>c)||(c>b && b>a)){
        return 2;
    }
    else if((b>a && a>c)||(c>a && a>b)){
        return 1;
    }
    else{
        return 3;
    }
}

int min(int a, int b, int c){
    if((a<b && b<c)||(a<c && a<b)){
        return 1;
    }
    else if((b<a && a<c)||(b<c && c<a)){
        return 2;
    }
    else{
        return 3;
    }
}
