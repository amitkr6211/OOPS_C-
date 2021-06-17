#include<iostream>
using namespace std;


class Complex{
    private:
        int real;
        int img;
    public:
        static int count;
        Complex(int real, int img){
            this->real=real;
            this->img=img;
            count+=1; 
            // if you don't initialize this static variable outside the class 
            // then it would give compiler error as undefined refernce .
            // this->count=0;
            // can not acess static variable using this keyword.
        }
        void display(){
            if(img>=0)
                cout<<real<< " + i"<<img<<endl;
            else 
                cout<<real<<" -"<<img<<endl;
        }
        static void getCount(){
            cout<<"the count is "<<count<<endl;
        }
};
int Complex::count=0;
int main(){
    Complex c(2,3);Complex c2(2,3);
    c.display();
    Complex::getCount();
    return 0;
}
//
/*
static member variable should not be initialized in the constructor, they can only be used in the cunstructor.
the scope of static object is through out the life time of program.
*/