//       //friend class frdclas.h
  class A{
  int x;
  public:
A(){
	 x=123;
	
	}
	friend class B;
};
class B
{
	public:
void dis(A o){
		int y=201;
		cout<<"value of Y :"<<y<<endl;
			cout<<"value of X : "<<o.x;
	}
};
//class A{
//		int x;
//		public:
//	A(){		
//	 x=10;
//		
//	}
//	 friend class b;	
//};
//class b{
//	public:
//		void dis(A a){
//			cout<<"vlaue of x"<<a.x;
//		}
//};
