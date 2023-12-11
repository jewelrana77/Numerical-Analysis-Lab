#include<bits/stdc++.h>

#define f(x) 3*x - cos(x) -1
#define g(x) 3+sin(x)
using namespace std;
int main(){
    
float x0,x,f0,f,g0,e;
int i=1,h;
cin>>x0>>e>>h;
cout<<setprecision(6)<<fixed;

do
{
    f0=f(x0);
    g0=g(x0);
    x=x0-(f0/g0);
if(i>h){
    cout<<"iteration compelete "<<"\n";
    exit(0);
}
else{
    cout<<"iteration: "<<i<<" "<<x<<endl;
}
x0=x;
f=f(x);
i=i+1;

} while (fabs(f)>e);


cout<<x<<"\n";
    return 0;
}