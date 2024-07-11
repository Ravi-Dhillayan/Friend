//#include <iostream>
//#include <string>
//using namespace std;
//class box{
//	int lenght;
//public:
//
//lenght=0;
//
//friend int prt(box b)
//{
//	b.lenght+=10;
//	return b.lenght;
// } 
//};
//int main(){
//	box b;
//	cout<<prt b<<eldl;
//	return 0;
//}
//
#include <iostream>
#include <string>
using namespace std;

class box {
    int lenght;

public:
    box() : lenght(10) {} // Constructor to initialize 'lenght'

    friend int prt(box b) {
        b.lenght += 10;
        return b.lenght;
    }
};

int main() {
    box b;
    cout << prt(b) << endl; // Corrected the function call and added 'endl'
    return 0;
}
	
