class B{
	int a,b;
	public:
	friend	void enter(B o);
	friend	void show(B o);
};
void enter( B o){
	cout<<"Enter the frist number :"<<endl;
	cin>>o.a;
	cout<<"Enter the second number : "<<endl;
	cin>>o.b;
		int c;
	c=o.a*o.b;
	

	cout<<"Subtract = "<<c<<endl;
		
}
void show(B o)
{
		cout<<"Enter the frist number :"<<endl;
	cin>>o.a;
	cout<<"Enter the second number : "<<endl;
	cin>>o.b;
	int d;
	d=o.a+o.b;
 cout<<"sum :="<<d;
}
