#include<iostream>

using namespace std;

class parent{
    private:
    protected:
    public:
        virtual void print() {}; 
};

class child : public parent{
    private:
        string cod;
        void print(){
            std::cout<<"code is  " << cod;
        }
    public:
        child(string c){
            cod = c;
        }
};
int main() {
	child c("mycode");
	
	//c.print();
	
	parent *p = &c;
	p->print();
	return 0;
}