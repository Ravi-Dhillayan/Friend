#include<iostream>
using namespace std;
class A {
	public:
	int i,j,k;
//	public:
		friend class C;
		
};
class C{
//	public:
 protected:
		friend class B;
};
class B{
	public:
		friend void fun(A &o);
};
void fun(A &o){
	cout<<"Enter the two number : "<<endl;
	cin>>o.i;
	cin>>o.j;
	o.k=o.i+o.j;
	cout<<"Sum of two number :-  "<<o.k<<endl;
}
int main(){
	A ao;
	B bo;
   fun(ao);
	
}

