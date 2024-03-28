#include <iostream>
using namespace std;
class xyz
{
	private:
		int j;
	public:
		void fun1()
		{
			for(int i=1; i<=4; i++)
				cout<<i<<endl;
				
		}
		void fun2()
		{
			for(int i=5; i<=8; i++)
				cout<<i<<endl;
			
		}
		void fun3()
		{
			for(int i=9; i<=12; i++)
				cout<<i<<endl;
				
		}
		xyz()
		{
			cout<<"object created"<<endl;
		}
		
};
int main(){
	xyz a;
	a.fun1();
	xyz b;
	b.fun2();
	xyz c;
	c.fun3();
	xyz d;
	cout<<"Gcuf.";
	return 0;
	
}
