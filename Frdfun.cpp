#include<iostream>
using namespace std;
class Frd{
	char name[50];
	int  age,roll_no,a,b,c;
	public:
		friend void Enter(Frd &o);
		friend void Show(Frd &o);
	void sum(){
				cout<<"Enter the two number : "<<endl;
	cin>>a;
	cin>>b;
	c=a+b;
	cout<<"sum = "<<c<<endl;
		}
		
};
void Enter(Frd &o){

	cout<<"Enter the name of student : "<<endl;
	cin>>o.name;
	cout<<"Enter the Age of Student : "<<endl;
	cin>>o.age;
	cout<<"Enter the roll_no of Student  : "<<endl;
	cin>>o.roll_no;
	
}
void Show(Frd &o){
	cout<<"Name of the Student : "<<o.name<<endl;
	cout<<"Age of the Student : "<<o.age<<endl;
	cout<<"Roll_no of the Student : "<<o.roll_no<<endl;
}
int main()
{
	Frd fo;
	cout<<"Direct Access ofr the class member : "<<endl;
	Enter(fo);
	Show(fo);
	Frd* po;
	po=new Frd;
	po->sum();
	Enter(*po);
	Show(*po);
	
}
