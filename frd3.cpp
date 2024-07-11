#include <iostream>
#include <string>
using namespace std;

class frd {
    int prt;
    string pro;

public:
 void pri( );     
 void protecte(); 
};

void frd::pri() {
    cout << "Enter the roll_no: " << endl;
    cin>>prt;
    cout << "Enter the name: " << endl;
    cin >>pro;
}

void frd::protecte() {
    cout << "Your roll_no: " << prt << endl;
    cout << "Your Name: " << pro << endl;
}

int main() {
    frd obj;
    obj.pri();      
    obj.pri();
}

