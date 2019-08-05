#include<iostream>
using namespace std;
 int main()
 {

     int n, i, j, a[50][50], s=0;
     cin>>n;
     for(i=1;i<=n; i++){
        for(j=1; j<=n; j++){
        cin>>a[i][j];
        }
     }

         for(i=1;i<=n; i++){
        for(j=1; j<=n; j++){
                cout<<a[i][j]<<" ";
        } cout<<endl;
         }
         for(i=1;i<=n-1;i++){



       cout<<a[i+1][i]<<" ";
  }


         return 0;


 }
