#include<iostream>
#include<math.h>
using namespace std;
 int main()
 {
   long long a;
     cin>>a;
    int b=(pow(a, 2)+pow(a, 4));
    cout<<(int)(3*b/(b+sqrt(b))+sqrt(b));
     return 0;

 }
