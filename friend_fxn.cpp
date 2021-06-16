#include<bits/stdc++.h>
using namespace std;

class A{
    private:
        int x;
    public:
        A(){
            x=10;
        }
        void display(){
            cout<<"The value of x is "<<x<<endl;
        }
    friend void inc(A &t);
    // friend void fxn2();
};

void inc(A &t){
    // this is a friend function , and can access the private variables of the class
    t.x=5+t.x;
}

int main(){
    A a;
    a.display();
    inc(a);
    a.display();
    return 0;
}