#include <iostream>
#include <cstring>
using namespace std;
//definig structures and using them 
struct student{
    //defining the members variables of the structure
    int id;
    string firstname;
    string lastname;
    float totalMarks;
    float gpa;
};//it must end with a ;

int main(){
//  (type) (variable)      we use the struct name as a data type
    student student1;
    student1.firstname ="soomie";//assigning the name (string)to the variable student1
    student1.totalMarks= 99.9;// assigning the total marks
    student1.gpa= student1.totalMarks/ 20; 
    cout<<student1.firstname<<endl; //displaying the intended values in this case the name 
    cout<<student1.gpa;// and the gpa
//--------------------------------------------------------//
    //bubble sort code example
    int size;
    int i, j, temp;// the type of temp var must be the same as the array type data[size]

    size = 6;// input example
    int data[size]={10, 7, 14, 0, 2};// make sure the number pf elemnts doesnt exceed the size 
    if (size < 2){
        cout<<"nothing to sort";//sorting works by comparing 2 or more values
    }

    
    for (i = 0; i < size -1; ++i){
       for (j=0 ; j < size -i-1; ++j ) {
        //comparing the values in the array
        if (data[j]> data[j+1]){
            temp = data[j];//we stored the value of data[j] in temp
            data[j] = data[j+1]; //we replaced the values of data[j] with data[j + 1] so the loop continues
            data[j + 1]= temp;//we placed the value we stored of data[j] to data [j + 1]
        }
       }
    }

    for (i = 0; i < size ; ++i){  
        cout<<data[i]<<endl;//displaying the values after being sorted
    }


}

