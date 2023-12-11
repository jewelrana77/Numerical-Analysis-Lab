#include<bits/stdc++.h>
using namespace std;
float u_cal(float u, float n){
float temp=u;
for(int i=0;i<n;i++){
temp=temp*(u-1);
}
return temp;
}
int fact(int n){
int val=1;
for(int i=2;i<n;i++){
    val=val*i;
}
return val;
}
int main(){
float x[20],y[20][20];
int i,j,n;
cin>>n;
for(int i=0;i<n;i++){
cin>>x[i];
cin>>y[i][0];
}
for(int i=1;i<n;i++){
    for(j=0;j<n-i;j++){
        y[j][i]=y[j+1][i-1]-y[j][i-1];
    }
}

float value;
cin>>value;
float u;
u=value-(x[0]/(x[1]-x[0]));
int sum=x[0];
for(int i=1;i<n;i++){
sum=sum+(u_cal(u,i)/fact(i))*y[0][i];
}
cout<<sum<<"\n";
return 0;
}