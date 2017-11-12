#include<stdio.h>
#include<math.h>
#include<stdlib.h>
 int main(){
 	float a,b,c,delta,x1,x2,x3;
 	printf("zaraib ra vard konid b tartb a , b, c\n");
 	scanf("%f%f%f" ,&a , &b , &c);
 	delta=pow(b,2)-4*a*c;
 	if(delta>0){
 		x1=(-b+sqrt(delta))/2*a;
 		x2=(-b-sqrt(delta))/2*a;
 		printf("\n x1=%f \n x2=%f \n 1\n" ,x1 , x2);
 		x3=fabs(x2)+fabs(x1);
 		printf("%3f" , x3);
	}
	if(delta==0){
		x1=x2=(-b)/2*a;
		printf("\n x1=x2=%f \n 3\n" , x1);
		x3=2*fabs(x1);
		printf("%3f" , x3);
	}
	if(b==0 && delta<0){
		x1=sqrt(-delta)/2*a;
		x2=-x1;
		printf("\n x1=%fi \nx2=%fi \n 2", x1 , x2);
		x3=2*x1;
		printf("\n %3f", x3);
	}
	if(delta<0 && b!=0){
		printf(" \nx1=(-b+sqrt(-delta)i)/2*a \nx2=(-b-sqrt(-delta)i)/2*a \n4");
		x3=fabs(-b/a)+2*fabs(sqrt(-delta/a));
		printf("\n%3f", x3);
	}
 }
