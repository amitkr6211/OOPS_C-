#include<iostream>
using namespace std;


class Complex{
    public:
        int real;
        int img;
        static int count;
        Complex(int real, int img){
            this->real=real;
            this->img=img;
            count+=1; 
        }
        Complex(){

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
        Complex operator +(Complex b){
            Complex temp;
            // cout<<"real "<<real<<endl;
            temp.real=real+b.real;
            temp.img=img+b.img;
            return temp;
        }
};
int Complex::count=0;
int main(){
    Complex c(2,3);
    Complex c2(5,4);
    c.display();

    Complex c3=c+c2;
    // the way compiler sees this is c.add(c2)
    // c call this , so in operator + , real value is actuall of c
    c3.display();
    Complex::getCount();


    return 0;
}