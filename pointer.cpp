#include<iostream>
using namespace std;
int main()
{
    float var=10.95;
    float *ptr=&var;
    cout<<"value of var="<<var<<endl;
    cout<<"value present at addres="<<*ptr<<endl;
    cout<<"address of var="<<&var<<endl;
    cout<<"value of ptr="<<ptr<<endl;
    cout<<"addressof ptr="<<&ptr<<endl;
    return 0;

}