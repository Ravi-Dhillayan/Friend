#include<iostream>
using namespace std;

class A {
	int x, y, z;
	public:
	friend class B;
};

class B {
	public:
	friend void abc(A &c);
	friend void xyz(A o);
};

void abc(A &c) {
	cout << "Ener first number: ";
	cin >> c.x;
	cout << "Enter second number: ";
	cin >> c.y;
}

void xyz(A o){
	cout << o.x+o.y;
}

int main() {
	A c;
	B l;
	l.abc(c);
	l.xyz(c);
}
