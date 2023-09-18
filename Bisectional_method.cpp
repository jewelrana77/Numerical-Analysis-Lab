#include<bits/stdc++.h>
using namespace std;
#define e 0.0001
#define f(x) pow(x,2)-2*x-5
int main(){
float x0,x1,x2;
float f0,f1,f2;
int i=0;

cout<<"enter the x0 and x1:"<<"\n";
cin>>x0>>x1;
do{
f0=f(x0);
f1=f(x1);
x2=(x0+x1)/2;
f2=f(x2);
if(f0*f1<0){
   x1=x2;
}
else{
   x0=x2;
}
i++;
cout<<"number of iteration:"<<i<<" "<<"root value:"<<x2<<" "<<"value of function:"<<f2<<"\n";
}
while(fabs(f2)>e and i<11);
return 0; 
}