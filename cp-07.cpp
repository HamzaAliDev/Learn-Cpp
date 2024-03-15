#include <iostream>
using namespace std;
int main (){
	int s1=1;
	int ad1=1;
	int s2=1;
	int i2=2;
	for(int i=1; i<=30;i+=2){
		cout<<i<<'='<<s1<<','<<i2<<'='<<s2<<','<<endl;
		s1=s1+ad1;
		ad1+=1;
		s2*=2;
		i2+=2;
	}
}
