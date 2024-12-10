#include <iostream>
#include <cstring>
using namespace std;

int main() {
   
    char str[21];  //To store a string with up to 20 characters, declare a character arra

// Request that the user input a string
    cout << "Enter a string (max 20 characters): ";
    cin.getline(str, 21); // Reads an input line with a maximum of 20 characters and a null terminator of 1.
    cout << "You entered: " << str << endl; // Presents the input string
    char copiedStr[41]; // Create a new character array to hold the concatenated and copied string.
    int length = strlen(str); // To determine the input string's length, use strlen.
    cout << "Length of the string: " << length << endl; // show the string length

// Transfer'str''s contents to 'copiedStr'

    strcpy(copiedStr, str);

  // "is cool!" should be concatenated to "copiedStr."
    strcat(copiedStr, " is cool!");

    cout << "Concatenated string: " << copiedStr << endl;

    return 0;
}