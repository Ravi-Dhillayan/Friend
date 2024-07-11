     // save data haiding frdc3.h
	class Ab{
	int x,y;
	public:
		Ab(){
			x=10;
			y=20;
			int z;
			z=x+y;
			cout<<"sum of two no : "<<z<<endl;
			
		}
		friend void  mlt(Ab o);
};
void mlt(Ab o){
	int m;
	m=o.x*o.y;
	cout<<"Multiple two no :"<<m;
}
