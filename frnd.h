class A{
	public:
		A(){
			cout<<"hello world :"<<endl;
		}
		int x,y;
		friend class b;
		
};
class B{
	int a,b;
	friend void aa(A obj);
	friend  void enter(B &o);
	friend void show(B &o);
	
};
void aa(A obj){
	cout<<"Enter the 1st value :"<<endl;
	cin>>obj.x;
	cout<<"Enter the 2nd value :"<<endl;
	cin>>obj.y;
	cout<<"Sum of two no"<<obj.x+obj.y<<endl;
//	obj.A();
}
void enter(B &o){
	cout<<"Enter the a no :"<<endl;
	cin>>o.a;
	cout<<"Enter the b no :"<<endl;
	cin>>o.b;
}
void show(B &o){
	cout<<o.a<<endl;
	cout<<o.b<<endl;
	cout<<"multiple two no:"<<o.a*o.b<<endl;
	
}
