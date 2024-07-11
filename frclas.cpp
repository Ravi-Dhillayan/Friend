#include<iostream>
using namespace std;
class A{
		int x;
		public:
	A(){		
	 x=10;
		
	}
	 friend class b;	
};
class b{
	public:
		void dis(A a){
			cout<<"vlaue of x"<<a.x;
		}
};
int  main(){
	A o;
	b oo;
	oo.dis(o);
}
