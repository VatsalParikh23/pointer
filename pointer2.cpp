#include<iostream>
using namespace std;
int main()
{
    int var[5]={1,2,3,4,5};
    int pos;
    int *posptr=&var[0];
    cout<<"enter a position in array:";
    cin>>pos;
    posptr=posptr+(pos-1);
    cout<<pos<<"addres is ="<<posptr;
    return 0;
   
}