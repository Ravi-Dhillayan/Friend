#include<iostream>
using namespace std;
class student{
	public: 
	string name,course;
	int roll_no,year,moble_no;
	void std(){
		
		cout<<"name  : "<<name<<endl;
		cout<<"roll_no : "<<roll_no<<endl;
		cout<<"course : "<<course<<endl;
		cout<<"year : "<<year<<endl;
		cout<<"moble_no : "<<moble_no<<endl;
	}
	
};
int main(){
	student oo;
		cout<<"            <<<<<<<<::::::::::>>>>>>>>             "<<endl; 
		cout<<"Enter the your name : "<<endl;
	cin>>oo.name;
	cout<<"Enter the your roll_no : "<<endl;
	cin>>oo.roll_no;
	cout<<"Enter the your course : "<<endl;
	cin>>oo.course;
	cout<<"Enter the your year : "<<endl;
	cin>>oo.year;
	cout<<"Enter the your moble_no :"<<endl;
	cin>>oo.moble_no;
		cout<<"            <<<<<<<<::::::::::>>>>>>>>             "<<endl; 
	oo.std();
	
	
}
