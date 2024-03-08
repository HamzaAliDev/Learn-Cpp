#include <iostream>
using namespace std;
int main(){
	
// student admission calculation.
	int s1,s2,s3;
	cout<<"first subject marks:";
	cin>>s1;
	cout<<"2nd subject marks:";
	cin>>s2;
	cout<<"3rd subject marks:";
	cin>>s3;
	float r=(s1+s2+s3)/3.0;
	if(r>=80){
		cout<<"you are above standard!\nAdmission granted"<<endl;
	}	
}
