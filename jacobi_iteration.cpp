#include<bits/stdc++.h>
using namespace std;

/*
x=(17-y+2z)/20
y=(-18-3x+z)/20
z=(25-2x+3y)/20
*/

#define f1(x,y,z) x=(17-y+2*z)/20
#define f2(x,y,z) x=(-18-3*x+z)/20
#define f3(x,y,z) x=(25-2*x+3*y)/20



using namespace std;

int main(){

   float x0=0,y0=0,z0=0,x,y,z,e,e1,e2,e3;

int step=1;
cout<<setprecision(6)<<fixed;
cin>>e;
do
{
x=f1(x0,y0,z0);
y=f2(x0,y0,z0);
z=f3(x0,y0,z0);

cout<<"iterations :"<<step<<" "<<x<<" "<<y<<" "<<z<<"\n";
e1=fabs(x0-x);
e2=fabs(y0-y);
e3=fabs(z0-z);
x0=x;
y0=y;
z0=z;


} while (e1>e && e2>e && e3>e  );

cout<<int(x)<<" "<<int(y)<<" "<<int(z)<<"\n";
    return 0;
}