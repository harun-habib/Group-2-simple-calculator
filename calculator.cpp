#include<iostream>
#include<cmath>
using namespace std;

int multiplication(int a, int b);
int substruct(int a, int b);
int division(int a, int b);
int addition(int a, int b);
int squareroot(int a, int b);
int reminder(int a, int b);




int main() {
    int num1, num2; 
    char operation; 
 
    cout << "Enter two numbers: "; 
    cin >> num1 >> num2; 
 
    cout << "Choose operation (+, -, *, /): "; 
    cin >> operation; 
 
    switch (operation) { 
        case '*': 

cout<<"Multiplication Result: "<<multiplication(num1,num2)<<endl;
break; 
case '-': 

cout<<"Substruct Result: "<<substruct(num1,num2)<<endl;
break; 
case '/': 

cout<<"Division Result:  "<<division(num1,num2)<<endl;

break; 
case '+': 
cout<<"Addition Result: "<<addition(num1,num2)<<endl;

break; 
case 'root': 

cout<<"Squareroot Result:  "<<squareroot(num1,num2)<<endl;

break; 
case '%': 
cout<<"reminder Result: "<<reminder(num1,num2)<<endl;

break; 
default: 
    cout << "Invalid operation!" << endl; 
}


    return 0;
}

int substruct(int a, int b) {
    return a-b;
}

int division(int a, int b) {
    return a/b;
}
int multiply(int a, int b){
    
    return a * b; }
    
    
    
    int addition(int a, int b) {

        return a+b;
    
    }

    int squareroot(int a, int b) {
        return sqrt(num1);
    
    } 

    int reminder(int a, int b) {
        return a%b;
    }




