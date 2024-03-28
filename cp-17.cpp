#include <iostream>
using namespace std;
struct book{
	int bookId;
	int pages;
	float price;
};
int main(){
	int n,m;
	cout<<"enter the books counts: ";
	cin>>n;
	book arr[n];
	for(int x=0; x<n; x++){
	
		cout<<"enter book id  then book pages and then book price: "<<endl;
		cin>>arr[x].bookId>>arr[x].pages>>arr[x].price;
	}
	float maxPrice = arr[0].price;
	for(int x=0; x<n; x++){
	
		if(arr[x].price > maxPrice){
		
			maxPrice = arr[x].price;
			 m = x;
		}
	}
	cout<<"the most costly book is:"<<endl;
	cout<<"book id: "<<arr[m].bookId<<endl;
	cout<<"book pages: "<<arr[m].pages<<endl;
	cout<<"book price: "<<arr[m].price<<endl;
}
