#include <iostream>
using namespace std;
int main(){
	int arr[10]={10,20,30,40,50,60,70,80,90,100};
	
//	part b
	cout<<"value of arr is:"<<endl;
	for(int j=0;j<=9;j++)
	cout<<arr[j]<<endl;
	
//	part c
	cout<< endl<< "the reverse order of arr is"<<endl;
	for(int k=9; k>=0; k--)
	cout<<arr[k]<<endl;
	
//	part d
//	declare another arry
	int brr[10];
	 for(int a=0; a<=9; a++)
		brr[a]=arr[a];
	cout<<"the value of brr is:"<<endl;
	for(int b=0;b<=9; b++)
	cout<<brr[b]<<',';
	cout<<endl;
	
//	part e

	int crr[10];
	for(int h=0; h<=9; h++)
		crr[h]=arr[h] + brr[h];
	cout<<"the values of crr:"<<endl;
	for(int f=0; f<=9; f++)
		cout<<crr[f]<<',';
		
//		part f



//     arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int drr[10];

    for (int i = 0; i < 10; i++) {
    	drr[i] = arr[9 - i];
    }

    cout <<endl<< "Value of drr "<<endl;
    for (int i = 0; i < 10; i++) {
		cout << drr[i] << " ";
    }
	
//	part g
	cout<<endl<<"the zigzag manner is:"<<endl;
	for(int m=0; m<=9; m++)
		cout<<arr[m]<<','<<drr[m]<<',';


}
