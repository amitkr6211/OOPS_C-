#include<iostream>
using namespace std;

class Vehicle{
    public:
        int year;
        string name;
        int fuel_capacity;

        Vehicle(int year, string name, int fuel_cap){
            this->year=year;
            this->name=name;
            this->fuel_capacity=fuel_cap;
        }
        void start(){
            cout<<"Vehicle starting"<<endl;
        }
};

class Bike: public Vehicle{ 
    public:
        int seat_cap;

        Bike(int year, string name, int fuel_cap, int seat_cap): Vehicle(year,name,fuel_cap){
            // this is used to call the parent class constructor.
            this->seat_cap=seat_cap;
        }
        void display(){
            cout<<this->name<<" "<<this->year<<" "<<fuel_capacity<<" "<<seat_cap<<endl;
        }
        //over riding
        void start(){
            // cout<<"Bike starting"<<endl; // over riding

            Vehicle:: start(); // to call the base class function explicitly , using the scope resolution operator
        }
};

int main(){
    Bike b(2018,"bmw",60,2);
    b.display();
    b.start();
    return 0;
}