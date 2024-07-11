       //save data haiding frdc3.h
  class Aa{
	int x,y;
	public:
	Aa(){
	x=10;
		y=2;	
	}	
	public:
		friend class Ba;
		
};
class Ba{
	public:
	void enter1(Aa o){
		int z=o.x/o.y;
		cout<<" Divide = "<<z;
	}
	public:
	void enter( Aa o){
	cout<<"Enter the frist number :"<<endl;
	cin>>o.x;
	cout<<"Enter the second number : "<<endl;
	cin>>o.y;
		int c;
	c=o.x*o.y;
	

	cout<<"multiple = "<<c<<endl;
		
}
public:
void show(Aa o)
{
		cout<<"Enter the frist number :"<<endl;
	cin>>o.x;
	cout<<"Enter the second number : "<<endl;
	cin>>o.y;
	int d;
	d=o.x+o.y;
 cout<<"sum :="<<d;
}
};
