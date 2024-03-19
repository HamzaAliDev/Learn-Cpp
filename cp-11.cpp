#include <iostream>
using namespace std;
int main(){
	int i,j;
	for(i=5; i>=1; i--){
		j=1;
		while(j<=i){
			cout<<"* ";
			j++;	
		}
		cout<<endl;
	}
	
}


