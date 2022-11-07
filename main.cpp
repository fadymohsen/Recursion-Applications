#include <iostream>
#include <string>
#include "recursion.h"
using namespace std;

int main() {

    // Print Starts Function
    cout<<"Function (1): Printing Stars"<<endl;
    cout<<"----------------------------"<<endl;
    cout<<"Printing Stars: ";
    printStars(10);
    cout<<endl<<endl<<endl;


    // Power Function Recursively
    cout<<"Function (2): Power Function:"<<endl;
    cout<<"-----------------------------"<<endl;
    cout<<"Power Result: ";
    cout<<powerNO(2,3)<<endl<<endl<<endl;


    // Plaindrom Function Recursively
    cout<<"Function (3): Plaindrome Function:"<<endl;
    cout<<"----------------------------------"<<endl;
    cout<<"IS Plaindrom? ";
    cout<<isPalindrome("MOM")<<endl<<endl<<endl;
}
