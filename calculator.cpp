#include<iostream>
using namespace std;

int multiplication(int a, int b);
int substruct(int a, int b);
int division(int a, int b);
int addition(int a, int b);


int main() {
int num1,num2;
char op;
cout<<"Enter The First Number : ";
cin>>num1;
cout<<"Enter The Second Number : ";
cin>>num2;
cout<<endl;
cout<<"The Results "<<endl;
cout<<"Multiplication Result: "<<multiplication(num1,num2)<<endl;
cout<<"Substruct Result: "<<substruct(num1,num2)<<endl;
cout<<"Division Result:  "<<division(num1,num2)<<endl;
cout<<"Addition Result:  "<<addition(num1,num2)<<endl;



    return 0;
}

int substruct(int a, int b) {
    return a-b;
}

int division(int a, int b) {
    return a/b;
}

