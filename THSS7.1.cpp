#include<stdio.h>
int main(){
	int i=1;
	for(;i<=100;i++){
		if(i%3==0&&i%5==0){
			printf("FizzBuzz");
		}		
		else if(i%3==0){
			printf("Fizz");
		}
		else if(i%5==0){
			printf("Buzz");
		}
	
		printf("%d \n",i);
	
	}
}
