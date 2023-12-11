#include<bits/stdc++.h>
using namespace std;
#define f1(x,y,z) x=(17-y+2*z)/20
#define f2(x,y,z) x=(-18-3*x+z)/20
#define f3(x,y,z) x=(25-2*x+3*y)/20
int main(){
float x0=0,y0=0,z0=0,x,y,z,e,e1,e2,e3;
int step=1;
cout<<setprecision(6)<<fixed;
cin>>e;
do
{
x=f1(x0,y0,z0);
y=f2(x,y0,z0);
z=f3(x,y,z0);

e1=fabs(x0-x);
e2=fabs(y0-y);
e3=fabs(z0-z);
cout<<"iteration "<<step<<" "<<x<<" "<<y<<" "<<z<<"\n";
x0=x;
y0=y;
z0=z;
step+=1;
} while (e3>e && e2>e && e1>e);

cout<<x<<" "<<y<<" "<<z<<"\n";

return 0;
}