#include <iostream>

using namespace std;

string title(string F){
    for(int i=0;F[i]!='\0';i++){
        if(i==0 && F[i]>=97){
            F[i]-=32;
        }
        else if(F[i-1]==' ' && F[i]>=97){
            F[i]-=32;
        }
        else if(i!=0 && F[i-1]!=' ' && F[i]>=65 && F[i]<=90){
            F[i]+=32;
        }
    }

	return F;
}

int main(){
	string F;

	getline(cin, F);

	cout << title(F) << "\n";
}
