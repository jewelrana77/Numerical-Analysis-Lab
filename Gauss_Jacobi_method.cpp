
/*3x+20y-z=-18
  2x-3y+20z=25
  20x+y-2z=17
*/


#include<bits/stdc++.h>
using namespace std;
#define e 0.001
#define f1(x,y,z) (17-y+2*z)/20
#define f2(x,y,z) (-18-3*x+z)/20
#define f3(x,y,z) (25-2*x+3*y)/20
int main(){
float x0=0,y0=0,z0=0,x1,y1,z1,e1,e2,e3;
int i=0;
do{
 x1=f1(x0,y0,z0);
 y1=f2(x0,y0,z0);
 z1=f3(x0,y0,z0);
}
while(e1>e and e2>e and e3>e);
printf("\nSolution: x=%0.3f, y=%0.3f and z = %0.3f\n",x1,y1,z1);
return 0;
}