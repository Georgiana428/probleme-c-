#include<iostream>
using namespace std;
 int main()
 {
     int a[100][100], i, j, m, n, k, l, gasit,nr, t[100][100];
     cin>>n>>m;
     for(i=1; i<=n; i++){
        for(j=1; j<=m; j++)
     {
        cout<<"a["<<i<<"]["<<j<<"]=";
        cin>>a[i][j];
     }
       }

   for(i=1; i<=n; i++){
        for(j=1; j<=m; j++){
                cout<<a[i][j]<<" ";
        } cout<<endl;
 }
  for(i=1; i<=n; i++){
        for(j=1; j<=m; j++){
                  for(k=1; k<=n; k++){
              for(l=1; l<=m; l++){

            if(a[i][j]==a[k][l])
                gasit++;
        }
 } cout<<a[i][j]<<" ";

 }
  }
 }

