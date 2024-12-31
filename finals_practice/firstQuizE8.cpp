#include <iostream>
using namespace std;

double feettokm(double distance){
    return 0.0003048 * distance;
}

double Kmtofeet(double distance){
    return 3280.84* distance;
}
int main (){
    double distance;
    cout<<"enter the distance: ";
    cin>> distance;

    char unit;

    
    cout<<"enter the unit\nF for feet\nK for km\n";
    cin>>unit;
    switch (unit){
        case 'F':
        cout<<distance<<" feet is "<<feettokm(distance)<<" km";
        break;

        case 'K':
        cout<<distance<<" km is "<<Kmtofeet(distance)<<" feet";
        break;

        default:
        cout<<"invalid letter";
        break;
    }



}
