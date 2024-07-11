using namespace std;
#include <iostream>
#include <string>

class frd {

    int prt;
    string pcro;
public:
  void pri();     
  void protecte( ); 
};

void frd::pri() {
    cout << "Enter the roll_no: " << endl;
    cin>>prt;
    cout << "Enter the name: " << endl;
    cin >>pcro;
}

void frd::protecte() {
    cout << "Your roll_no: " <<prt << endl;
    cout << "Your Name: " <<pcro << endl;
}

int main() {
    frd obj;
    obj.pri();      
obj.protecte();
}

