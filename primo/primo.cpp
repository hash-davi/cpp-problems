#include <iostream>

using namespace std;

bool eh_primo(int x){
	int count{};
	if(x==2||x==3){
        return true;
	}
	else if(x==1){
        return false;
	}else{
        for(int i=2;i<x;i++){
            if(x%i==0){
                count++;
            }
        }
	}

	if(count==0){
        return true;
	}else{
        return false;
	}
}

int main(){
	int x;

	cin>>x;

	if(eh_primo(x)){
		cout << "S" << "\n";
	}else{
		cout << "N" << "\n";
	}
}
