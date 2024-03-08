#include <iostream>
using namespace std;
int main(){
	
	//find the largest num.
	int a,b,c;
	cout<<"enter 1st number:";
	cin>>a;
	cout<<"enter 2nd number:";
	cin>>b;
	cout<<"enter 3rd number:";
	cin>>c;
	int max=a;
	if(b>a&&b>c)
		cout<<"maximum is"<<b;
	if(c>a&&c>b)
		cout<<"maximum is"<<c;
	else
		cout<<"maximum is"<<a;
		
	//find largest and smallest number
	int num,largest,smallest;
	cout<<"Enter number 1:";
	cin>>num;
	largest=smallest=num;
	for(int i=2;i<=5;i++)
		{	cout<<"Enter number"<<i<<":";
		cin>>num;
		if(num>largest)
			largest=num;
		if(num<smallest)
			smallest=num;
	}
	cout<<"largest number is"<<largest<<endl;
	cout<<"smallest number is"<<smallest;


	
}
