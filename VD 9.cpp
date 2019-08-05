#include<iostream>
using namespace std;
int main()
{
    int a[50],b[50],c[50], n ,m ,i ,j ,k ,gasit;
      cin>>n>>m;
      for(i=1;i<=n;i++) cin>>a[i];


for(i=1;i<=m;i++) cin>>b[j];

k=0;
for(i=1;i<=n;i++) { gasit=0;
for(j=1;j<=m && !gasit;j++)
if(a[i]==b[j])
gasit=1;
if(!gasit) c[k++]=a[i];
} cout<<"A reunit cu B"<<endl;

for(i=1;i<=m;i++)
    cout<<b[i]<<" ";
for(i=0;i<k;i++)
 cout<<c[i]<<" ";

}
