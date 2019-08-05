#include<iostream>
using namespace std;
 int main()
 {
     int a[100][100], i, j, m, n, k, l, gasit=0, maxx=0,t[100][100];
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
             gasit = 0;
             for(k=1; k<=n; k++){
              for(l=1; l<=m; l++){
                    if(a[i][j]==a[k][l])
                    gasit++;

              }
             }
             t[i][j] = gasit;
        }
  } cout<<endl;
   for(i=1; i<=n; i++){
        for(j=1; j<=m; j++){
                cout<<t[i][j]<<" ";
        } cout<<endl;


 } cout<<endl;
    for(i=1; i<=n; i++){
        for(j=1; j<=m; j++){
                if(maxx<t[i][j])
                maxx=t[i][j];
        }
        } cout<<a[i][j]<<"de pe pozitia (" << i << "," << j << ") e un element cu frecventa maxima " << maxx << ".";


  for(i=1; i<=n; i++){
        for(j=1; j<=m; j++){
                if(t[i][j]==maxx)
                cout<<a[i][j]<<"de pe pozitia (" << i << "," << j << ") e un element cu frecventa maxima " << maxx << "."<<endl;
        }
  }

 }
