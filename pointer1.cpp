#include<iostream>
using namespace std;
 main ()
 {
    int var[5]={1,2,3,4,5};
     int i;
     int*ptr=&var[0];
     for(i=0;i<5;i++)
     {
     cout<<*ptr<<ptr<<endl;
     ptr++;
     }
     return 0;
 }