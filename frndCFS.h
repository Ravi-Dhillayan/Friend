
class A{
	int x,y;
//	char n[10],roll_no;
	public:
		 char n[10], roll_no;
		A(){
		cout<<"Hello  Your Welcome"<<endl;
		
		}
		void enter();
		friend void show( A o);
	
	friend 	class C;
		~A(){
		cout<<"End for the program"<<endl;
		}
};
void A :: enter()
{
  cout<<"Enter the vlaue of x:"<<endl;
  cin>>x;
  cout<<"Enter the vlaue of Y :"<<endl;
  cin>>y;
  
}
void show( A o){
	cout<<"value of the X"<<o.x<<endl;
	cout<<"Value of the y"<<o.y<<endl;
	cout<<"Sum of x+y"<<o.x+o.y<<endl;
}

class C{
	  friend void  n(A &o);
	  friend void r(A o);
	  
};
void n(A &o){
	cout<<"Enter the Your name :"<<endl;
	cin>>o.n;
	cout<<"Enter the Your Roll_no :"<<endl;
	cin>>o.roll_no;
	
}
void r(A o){
	cout<<"Your Name :"<<o.n
	<<endl;
	cout<<"Your Roll_no"<<o.roll_no<<endl;
}


