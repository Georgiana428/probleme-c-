 #include<iostream>
 using namespace std;
 int main()
 {
     int n, i, j, a[50][50];
     cin>>n;
     for(i=1; i<=n; i++)
     {
     for(j=1; j<=n ; j++)
     {
         a[i][j]=j;
         if(i%2==0)
         {
             a[i][j]=n-j+1;
         }
     }
     }
     for(i=1; i<=n; i++)
     {
         for(j=1; j<=n; j++) {
            cout<<a[i][j];
         } cout<<endl;
     }
 }
