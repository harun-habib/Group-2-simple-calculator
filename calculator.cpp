#include<iostream>
#include<cmath>
using namespace std;

int multiplication(int a,int b);
int substruct(int a, int b);
int division(int a, int b);
int addition(int a, int b);
double squareroot(int a); 
int reminder(int a, int b);

int main() {
    int num1, num2;
    char operation;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Choose operation (+, -, *, /, %, r for square root): "; 
    cin >> operation;

    switch (operation) {
        case '*':
            cout << "Multiplication Result: " << multiplication(num1, num2) << endl;
            break;
        case '-':
            cout << "Subtraction Result: " << substruct(num1, num2) << endl;
            break;
        case '/':
            if (num2 == 0) {
                cout << "Error: Division by zero!" << endl;
            } else {
                cout << "Division Result: " << division(num1, num2) << endl;
            }
            break;
        case '+':
            cout << "Addition Result: " << addition(num1, num2) << endl;
            break;
        case 'r': // Changed case to 'r' to match the prompt
            cout << "Square Root Result: " << squareroot(num1) << endl; // Call sqrt with only num1
            break;
        case '%':
            if (num2 == 0) {
                cout << "Error: Modulo by zero!" << endl;
            } else {
                cout << "Remainder Result: " << reminder(num1, num2) << endl;
            }
            break;
        default:
            cout << "Invalid operation!" << endl;
    }

    return 0;
}

int multiplication(int a, int b) {
    return a * b;
}

int substruct(int a, int b) {
    return a - b;
}

int division(int a, int b) {
    return a / b;
}

int addition(int a, int b) {
    return a + b;
}

double squareroot(int a) { 
    if (a < 0) {
        cout << "Error: Cannot take square root of a negative number!" << endl;
        return NAN; 
    }
    return sqrt(a);
}

int reminder(int a, int b) {
    return a % b;
}
