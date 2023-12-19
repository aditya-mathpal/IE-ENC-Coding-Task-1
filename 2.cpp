#include <iostream>
using namespace std;

int main() {
    int n, rev=0;
    cout<<"Enter a number to print it reversed\n";
    cin>>n;
    while(n>0) {
        rev = 10*rev + n%10;
        n = n/10;
    }
    cout<<"\nThe reversed number is "<<rev;
    return 0;
}