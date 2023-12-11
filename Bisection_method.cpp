#include<bits/stdc++.h>

#define f(x) x*x*x-9*x+1

using namespace std;


int main(){
float x0,x1,f0,f1,f,x,e;
int step=1;

cin>>x0>>x1>>e;



f0=f(x0);
f1=f(x1);
cout<<setprecision(6)<<fixed;

do{
x=(x0+x1)/2;
f=f(x);
cout<<"iteration : "<<step<<" "<<x<<" "<<f<<"\n";
if(f0*f<0){
    x1=x;
}
else{
    x0=x;
}
step=step+1;
}
while(fabs(f)>e);

cout<<"Root value is: "<<x<<"\n";


return 0; 
}