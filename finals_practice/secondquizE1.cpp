#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

double AreaSquare(double &s){
    cout<<"enter the side of the square: ";
    cin>>s;

    return pow(s ,2);
}

void GBand ();
int main(){

    double sidelength = 0;
    double area= AreaSquare(sidelength);
    cout<<"the area of the square is: "<<area<<endl<<endl;
    GBand();

}



void GBand (){
    cout<<1+ rand()%(5);

}