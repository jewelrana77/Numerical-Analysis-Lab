#include<bits/stdc++.h>
using namespace std;
#define e 0.001
#define f(x) x*x*x-4*x+1
int main(){
float x0,x1,x2,f0,f1,f2;
int i=0;
cout<<"enter the x0 and x1 value: ";
cin>>x0>>x1;
do{
f0=f(x0);
f1=f(x1);
x2=((x0*f1)-(x1*f0))/(f1-f0);
f2=f(x2);
if(f0*f2<0){
  x1=x2;
  f1=f2;  
}
else{
    x0=x2;
    f0=f2;
}
i++;
cout<<"number of iteration :"<<i<<" root value: "<<x2<<" "<<"function of value: "<<f2<<"\n";
}
while(fabs(f2)>e);
return 0;
}