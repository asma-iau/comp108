#include <iostream>
using namespace std;
void menu(){
    cout<<"choose an operation:\n1-calculate the sum\n2-calculate the subtaction\n3-calcualte teh product\n4-calculate the division\n";
}

double sum(double x,double y){
    return x +y;
}

double sub(double x,double y){
    return x-y;

}

double prod(double x, double y){
    return x * y;

}

double division(double x,double y){
    return x/y;
}

int main(){
    menu();
    int choice, num1, num2, flag= 0;
    do{
    
    cin>>choice;
    cout<<"now enter the first and second numbers: ";
    cin>>num1>> num2;

    
    switch (choice)
    {
    case 1/* constant-expression */:
        cout<<"the sum of the numbers is: "<<sum(num1,num2);
        break;
    case 2:
    cout<<"the subtraction of the numbers is: "<<sub(num1, num2);
    break;
    case 3:
    cout<<"the product of the numbers is: "<<prod(num1, num2);
    break;

    case 4:
    if (num2 == 0){
        cout<<"ERROR (division by 0)";
        break;}
       
    else {
        cout<<"the divsion of the numbers is: " <<division(num1,num2);
        break;
    }
    default:
    cout<<"invalid operation number";
        break;
    }
    cout<<"\nenter 0 to stop the program, and 1 to continue ";
    cin>>flag;
}while(flag != 0);



}