#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int n,n2,c=0,d=0,arm=0,length;
    cout<<"Enter a number to check whether it's prime and/or Armstrong\n";
    cin>>n;
    n2 = n;
    length = log(n)/log(10) + 1;            //finding number of digits by taking log base 10 and adding 1
    if(n==2)
    goto jump;
    for(int i=2;i*i<n;i++) {                //checking for factors above 1 and below sqrt n, a prime number will have none
        if(n%i==0)
        c++;
    }
jump:
    while(n2>0) {
        arm = arm + pow(n2%10,length);      //an armstrong number is equal to the sum of its digits each raised to the power of the number of digits
        n2=n2/10;
    }
    if(arm==n)
    d++;
    if(c==0 && d!=0)
    cout<<"The number is prime and Armstrong";
    else if (c==0)
    cout<<"The number is prime but not Armstrong";
    else if (d!=0)
    cout<<"The number is Armstrong but not prime";
    else
    cout<<"The number is neither prime nor Armstrong";
    return 0;
}