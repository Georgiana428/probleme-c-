#define _USE_MATH_DEFINES
#include<iomanip>
#include<iostream>
#include<math.h>
using namespace std;
 int main ()
 {
     int d1, d2, a, b, c;
     cin>>d1>>d2;
     a=d1/2;
     b=d2/2;
    c=a*a+b*b;
    double l=sqrt(c);
     cout<<l*4<<setprecision(5)<<fixed<<" ";

     cout<<(d1*d2)/2;
     return 0;
 }

