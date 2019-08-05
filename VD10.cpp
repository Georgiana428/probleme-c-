#include<iostream>
using namespace std;
int main()
{
    int a[50], b[50], c[50], i, j, k=1, m, u, gasit, n;
    cout<<"n=";cin>>n;
    cout<<"m=";cin>>m;
    for(i=1; i<=n; i++)
    {
        cout<<"a["<<i<<"]=";
        cin>>a[i];
    }
cout<<endl;

    for(j=1; j<=m; j++)
    {
        cout<<"b["<<j<<"]=";
        cin>>b[j];
    }
    for(i=1; i<=n; i++)
        for(j=1; j<=n; j++)
    {
        if(a[i]==b[j])
        { int gasit=0;
            for(u=1; u<=k; u++){
              if(c[u]==a[i])
                gasit=1;}
              if(gasit!=1){
            c[k]=a[i];
            k++;
            break;
              }
        }
        if(c[k]==a[i])
            c[k]=b[j];
    }
    cout<<"intersectia multimilor:{";
    for(i=1; i<k; i++)
        cout<<c[i]<<" ";
}
