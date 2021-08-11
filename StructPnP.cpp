// Padding means adding extra bytes whereas packing means removing those. 

#include <iostream>
using namespace std;

// #pragma pack(1)  //disables padding

struct B{
    char a;
    char b;
    int i;
};

// |a|b|-|-|i|i|i|i|

struct BB{
    char c;
    int i;
    char c1;
};

// |a|-|-|-|i|i|i|i|b|-|-|-|

int main() {
	cout<<sizeof(B)<<endl;
	cout<<sizeof(BB)<<endl;
	return 0;
}

// Memory mapping

// 1 byte can be stored anywhere
// 2 byte can be stored at multiple of 2
// 4 byte can be stored at multiple of 4
// 8 byte can be stored at multiple of 8