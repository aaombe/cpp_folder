#include <iostream>

using namespace std;

double opratoration (double num1, double num2,char op) {
    double result;
    switch (op){
        case '*':
            result = num1 * num2;
            break;
        case 'X':
            result = num1 * num2;
            break;
        case 'x':
            result = num1 * num2;
            break;
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        default:
            cout <<"Invalid operation";
            result = -1;
    }
    return result;
}


int main(){
    double num1; double num2;
    char opr;
    cout <<"Enter a number: ";
    cin>> num1;
    cout <<"Enter operation: ";
    cin >> opr;
    cout <<"Enter a number: ";
    cin >> num2;
    double result = opratoration (num1, num2, opr);
    cout <<result;
    return 0;
}
