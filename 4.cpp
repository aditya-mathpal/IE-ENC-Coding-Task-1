#include <iostream>
#include <cmath>
using namespace std;

int main() {
    char function;
    double a, b;
retry:
    cout<<"Pick the function you'd like to execute: + (add), - (subtract), x (multiply), / (divide), r (square root), ^ (exponent)\n";
    cin>>function;
    switch(function) {
        case '+':
            cout<<"\nEnter two numbers to be added\n";
            cin>>a;
            cout<<"+ ";
            cin>>b;
            cout<<"= "<<a+b;
        break;
        case '-':
            cout<<"\nEnter two numbers to be subtracted\n";
            cin>>a;
            cout<<"- ";
            cin>>b;
            cout<<"= "<<a-b;
        break;
        case 'x':
            cout<<"\nEnter two numbers to be multiplied\n";
            cin>>a;
            cout<<"x ";
            cin>>b;
            cout<<"= "<<a*b;
        break;
        case '/':
            cout<<"\nEnter two numbers to be divided\n";
            cin>>a;
            cout<<"/ ";
            cin>>b;
            cout<<"= "<<a/b;
        break;
        case 'r':
            cout<<"\nEnter a number to find its square root\n";
            cin>>a;
            cout<<"= "<<sqrt(a);
        break;
        case '^':
            cout<<"\nEnter a number and the power it is to be raised to\n";
            cin>>a;
            cout<<"^ ";
            cin>>b;
            cout<<"= "<<pow(a,b);
        break;
        default:
            cout<<"\nThis function does not exist, enter a valid function\n";
            goto retry;
        break;

    }
    return 0;
}