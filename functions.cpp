#include <iostream>
#include <string>
#include "recursion.h"
using namespace std;



// START PRINTING STARS
void printStars(int n){
    if (n<0) {
        cout << "INVALID" << endl;
    }else if (n==0){
        cout<<"EMPTY"<<endl;
    }else if (n==1){
        cout<<'*';
    }else if (n>1){
        cout<<'*';
        printStars(n-1);
    }
}
// END PRINTING STARS



// START POWER FUNCTION
int powerNO(int base, int exp){
    if (exp<0){
        cout<<"Invalid Process";
    }else if (exp==0){
        return 1;
    }else if (exp==1) {
        return base;
    }else{
            return base*powerNO(base, exp-1);
    }
}
// END POWER FUNCION



// START PALINDROME FUNCTION
bool isPalindrome(string text){
    if (text.length() < 1){
        return false;
    }else if (text.length() == 1){
        return true;
    }else{
        char first = text[0];
        char last = text[text.length()-1];
        if(first == last){
            string restString = text.substr(1, text.length()-2);
            return isPalindrome (restString);
        }else{
            return false;
        }
    }
}
// END PLAINDROME FUNCTION
