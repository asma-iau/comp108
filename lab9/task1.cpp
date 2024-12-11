#include <iostream>
using namespace std;

int main(){
int size, i;
int sum , avrg, largest, smallest;
sum = 0;

cout<<"enter number size:  ";
cin>>size;

int numbers[size];

cout<<"enter ["<<size<<"] numbers:  ";
for (i = 0 ;i < size ; ++i){
    cin>>numbers[i];
}

largest= numbers[0];
smallest= numbers[0];

cout<<"the number of values is "<<size<<": ";
for (i = 0; i < size ; ++i){
    cout<<numbers[i]<<"  ";
    sum += numbers[i];
    if (numbers[i] < smallest){
        smallest = numbers[i];

    }
    else if (numbers[i]> largest){
        largest = numbers[i];
    }
    
}

cout<<"\nthe sum is: "<<sum<<endl;

avrg = sum / size;
cout<<"the average is: "<<avrg<<endl;

cout<<"the largest number is: "<<largest<<endl;
cout<<"the smallest number is: "<< smallest<<endl;


return 0;
}