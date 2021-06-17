#include<bits/stdc++.h>
using namespace std;

class A{
    public:
        void fxn(){
            cout<<"HELLO FROM A"<<endl;
        }
};

class B{
    public:
        void fxn(){
            cout<<"HELLO FROM B"<<endl;
        }
};

class C: public A, public B{
    public:
        // void fxn(){
        //     cout<<"HELLO FROM C"<<endl;
        // }
        // if we dont declare fxn here , then calling c.fxn will be 
        // ambiguous (run time error , not compile time)
};
int main(){
    C c;
    c.fxn();
    return 0;
}