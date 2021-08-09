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
        string code;
        void print(){
            cout<<"code is "<<code;
        }
    public:
        child(string c){
            code = c;
        }
};
int main() {
	child c("mycode");
	
	//c.print();
	
	parent *p = &c;
	p->print();
	return 0;
}