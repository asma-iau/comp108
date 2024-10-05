#include <iostream>
using namespace std;
int main()
{
char system;
float temprature;

cout<<"enter the temperature and the mesurment system (f or c): "<< endl;
cin>> temprature >> system;


if (system == 'f' || system == 'F' ){

    float cel = (temprature - 32) * 5 / 9;
    cout<< cel <<" c";

}



if (system =='c' || system =='C'){
    float fer = (temprature * 5/9)+ 32;
    cout<< fer <<" f";
}

else{
    cout<<"Invalid measurement system. Please use 'f' for Fahrenheit or 'c' for Celsius."<< endl;

}

}
