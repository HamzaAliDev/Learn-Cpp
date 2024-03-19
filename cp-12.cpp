#include <iostream>
using namespace std;
int main(){
	int a,b;
	for(a=1; a<=5; a++){
		for(b=1; b<=a; b++)
			cout<<"* ";
	cout<<endl;
	}
	int i,j;
	for(i=4; i>=1; i--){
		j=1;
		while(j<=i){
			cout<<"* ";
			j++;	
		}
		cout<<endl;
	}
	
}

