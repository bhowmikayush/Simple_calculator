#include <iostream>
using namespace std;
int main(){
int num1;
cout<<"Enter the first number:";
cin>>num1;
 
int num2;
cout<<"Enter the second number:";
cin>>num2;
 
char ch;
cout<<"Enter the operator (+ - * /):\n";
cin>>ch;

switch(ch){
    case '+': 
   cout<<num1<<"+"<<num2<<"="<<num1+num2;
break;

    case '-':
   cout<<num1<<"-"<<num2<<"="<<num1-num2;
break;

    case '*': 
   cout<<num1<<"*"<<num2<<"="<<num1*num2;
break;

    case '/': 
   cout<<num1<<"/"<<num2<<"="<<num1/num2;
break;
    default:
    cout<<"invalid operator";

}
    return 0;
}