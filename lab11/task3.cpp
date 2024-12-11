#include <iostream>
using namespace std;
int main (){
    const int size= 4;
    int matrix[size][size];

    cout<<"enter the 4x4 matrix: " <<endl;
    for(int i = 0; i < size; ++i){
        for (int j =0 ; j < size ; ++j){
            cin>>matrix[i][j];

        }
    }

    int left_diagonal_sum = 0, right_diagonal_sum= 0 ;
    for (int i =0 ; i < size; ++i){
        left_diagonal_sum += matrix[i][i];
        right_diagonal_sum += matrix[i][size -i -1];
    
    }
    cout<<"A) the sum of the left diagonal elements: "<< left_diagonal_sum<<endl;
    cout<<"B) the sum of the right diagonal elements: "<< right_diagonal_sum<<endl;
    cout<<"C) the lower triangular elements: "<< endl;
    for (int i = 0; i < size; ++i){
        for (int j = 0; j<= i; ++j){
            cout<< matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"D) the upper triangular elements: "<<endl;
    for (int i = 0 ; i < size; ++i){
        for (int j = 0; j < size ; ++j){
            if (j>= i){
            cout<<matrix[i][j]<<" ";}
            else {
                cout<<"  ";
            }

        }
        cout<<endl;
    }

    cout<<"asma";
    return 0;

}