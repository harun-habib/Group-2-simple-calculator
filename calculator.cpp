#include<iostream>
using namespace std;
int substruct(int a, int b);
int division(int a, int b);
int addition(int a, int b);


int main() {
int num1,num2;
cout<<"result"<<substruct(num1,num2)<<endl;
cout<<"result"<<division(num1,num2)<<endl;
cout<<"result"<<addition(num1,num2)<<endl;



    return 0;
}
int substruct(int a, int b) {
    return a-b;
}

int division(int a, int b) {
    return a/b;
}

int addition(int a, int b) {
    return a+b;
}