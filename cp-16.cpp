#include <iostream>
using namespace std;
int main(){
//	task 2
//	part a
	int numbers[10];
	for(int i=0; i<=9; i++){
	
		cout<<"enter an integer:";
		cin>>numbers[i];
	}
//	part a 
	for(int j=1; j<=9; j+=2)
		cout<<numbers[j]<<',';
	cout<<endl;	
//	part b
	cout<<"even elements:"<<endl;
	for(int k=0; k<=9; k++){
	
		if(numbers[k] %2==0)
			cout<<numbers[k]<<',';
	}
	
	
	
	
	
	
	
	
}
