#include <iostream>
using namespace std;
int main(){
	// utility bill calculation.
	int uni,bill;
	cout<<"Enter units:";
	cin>>uni;
	if(uni<=300)
		bill=uni*2;
	else if(uni>300&&uni<=500)
		bill=uni*5;
	else if(uni>500)
		bill=uni*7;
	bill=bill+150;
	if(bill>2000)
		bill=bill +(bill*5.0/100.0);
	cout<<"Total bill"<<bill;
	
}
