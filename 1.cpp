#include <iostream>
using namespace std;

int main() {
    int array[5], max, min;
    cout<<"Enter 5 random values to form an array\n";
    for(int i=0;i<5;i++)
    cin>>array[i];
    max = min = array[0];
    cout<<"\nThe entered numbers are ";
    for(int i=0;i<5;i++)
    cout<<array[i]<<" ";
    cout<<endl;
    for(int i=1;i<5;i++) {
        if(array[i]>max)
        max = array[i];
    }
    for(int i=1;i<5;i++) {
        if(array[i]<min)
        min = array[i];
    }
    cout<<"The maximum value in the array is "<<max<<" and the minimum value in the array is "<<min<<".";
    return 0;
}