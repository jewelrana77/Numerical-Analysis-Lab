#include<bits/stdc++.h>
using namespace std;
#define  e 0.001
#define f(x) pow(x,3)-4*x+1
#define df(x) 3*x*x-4 
int main(){
float x0,x1,f0,f1,df0;
int i=0;
cout<<"enter the value of x0:";
cin>>x0;
do{
f0=f(x0);
df0=df(x0);
x1=x0-(f0/df0);
f1=f(x1);
x0=x1;
i++;
cout<<" number of iteration: "<<i<<" "<<"root value:"<<x1<<" "<<"value of function:"<<f1<<"\n";
}
while(fabs(f1)>e);
return 0;
}