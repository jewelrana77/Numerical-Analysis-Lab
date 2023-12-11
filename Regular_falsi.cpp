#include<bits/stdc++.h>
#define f(x)  cos(x) - x * exp(x)

using namespace std;
int main(){
float x0,x1,x,f0,f1,f,e;
int step=1;
cout<<setprecision(6)<<fixed;
cin>>x0>>x1>>e;
f0=f(x0);
f1=f(x1);
do
{
 x=(x0*f1-x1*f0)/(f1-f0);
 f=f(x);
 cout<<"iteration "<<step<<" "<<x<<" "<<f<<"\n";
 if(f0*f==0){
    exit(0);
 }
 if(f0*f<0){
    x1=x;
 }
 else{
    x0=x;
 }
} while (fabs(f)>e);

cout<<x<<endl;
    return 0;
}