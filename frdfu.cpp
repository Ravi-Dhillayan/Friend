#include<iostream>
using namespace std;
class frd{
    int x, y;
public:
    friend void enter(frd &o);
    private:

    friend void show(frd &o);
    public:
    	void a();
};
void enter(frd &o){
    cout<<"Enter the value of X:"<<endl;
    cin>>o.x;
    cout<<"Enter the value of y: "<<endl;
    cin>>o.y;
}
void show(frd &o){
    cout<<"Value of the X: "<<o.x<<endl;
    cout<<"Value of the Y: "<<o.y<<endl;
}
void frd::a(){
	cout<<"Hello  world :";
}
int main(){
    frd obj;
    enter(obj);
    show(obj);
    obj.a();
    return 0;
}

