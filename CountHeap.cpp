#include<iostream>
using namespace std;


class A{
    public:
        static int x;
        A(){
            x++; //meant when space is assigned and constructor is called
        }
        ~A(){
            x--;
        }
        void* operator new(size_t sz){
            x++;
        }
        void operator delete(void* ptr){
            free(ptr);
            x--;
        }
};

int A::x = 0;
int main(){
    A a,b,c;
    A* ptr = (A*)malloc(sizeof(A));  //allocates the memory but doesn't call the constructor
    A* p = new A; //allocates and calls the constructor

    free(ptr); //free the memory but doesn't calls the destructor
    delete p; //free as well as calls the destructor
    cout<<A::x;

    return 0;
}