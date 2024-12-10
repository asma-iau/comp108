#include <iostream>
#include <cmath>
using namespace std;

int main(){

    float  s, area;
    cout<<"input the side of the side of the hexagon: "<<endl;
    cin>>s;
    area= (6* pow(s,2))/(4* tan(M_PI/6));
    cout<<"the are of the hexagon is: "<<area;
}

//finished in 6.48