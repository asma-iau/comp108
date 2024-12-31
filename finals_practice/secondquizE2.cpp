#include <iostream>
#include <cmath>
using namespace std;

void menu(){
    cout<<"A: convert meters to feet."<<endl;
    cout<<"B: convert feet to meters."<<endl;

}


double MetertoFeet(double distance){
    double feet = distance * 3.280;
    return feet;
}

double FeetToMeter(double distance){
    double meter= distance/ 3.280;
    return meter;
}

int main(){
    char choice ;
    int flag =1;
    double distance;

    do{
        menu();
        cout<<"enter ur choice: ";
        cin>> choice;
        
        cout<<"Enter the distance: ";
        cin>> distance;
        if(choice == 'A'){
            cout<<"the conversion from meters to feet : "<<MetertoFeet(distance)<<endl;
        }
        else if (choice == 'B'){
            cout<< "the conversion from feet to neters : "<<FeetToMeter(distance)<<endl;

        }
        else 
        cout<<"invalid letter." ;

        cout<<"enter 0 to end the program and 1 to continue  ";
        cin>>flag;


    } while(flag!= 0);

}