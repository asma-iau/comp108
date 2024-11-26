#include <iostream>
using namespace std;

void calc(int start,int end,int & evenSum,int & oddSum){
    if (start > end){
        return;
    }
    if (start %2 ==0)
    evenSum += start;
    else
    oddSum += start;
    calc(start +1,end,evenSum,oddSum);  

}

int main(){
    int start,end;
    int evenSum = 0;
    int oddSum = 0;

    cout<<"enter the start number: ";
    cin>>start;
    cout<<"enter the end number: ";
    cin>>end;
    calc(start,end,evenSum,oddSum);
    cout<<"sum of even numbers: "<<evenSum<<endl;
    cout<<"sum of odd numbers: "<<oddSum<<endl;
    return 0;

}