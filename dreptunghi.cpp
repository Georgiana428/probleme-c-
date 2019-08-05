#include<math.h>
#include<iostream>
using namespace std;
int main()
{
    int a, b, A, P  , D;
    cin>>a>>b;
    P=(2*(a+b));
    A=a*b;
    D=(pow(a,2)+pow(b,2));
    cout<<P<<" "<<A<<" "<<D;
    return 0;

}
