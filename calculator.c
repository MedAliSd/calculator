#include<stdio.h>
int main(){
	float a,b;
	char inst;
	printf("enter the first number you want to calculate ");
	scanf("%f",&a);
	printf("enter the first number you want to calculate ");
	scanf("%f",&b);
	printf("choose between +,-,*,/,%% : ");
	scanf("%c",&inst);
	scanf("%c",&inst);
	switch(inst){
		case '+':
			printf("the result is %d",(int)a+(int)b);break;
		case '-':
			printf("the result is %d",(int)a-(int)b);break;
		case '*':
			printf("the result is %d",(int)a*(int)b);break;
		case '/':
			printf("the result is %.2f",a/b);break;
		case '%':
			printf("the result is %d",(int)a%(int)b);break;
		default :
			printf("error");
			
		}
	
	
}
