#include<stdio.h>

int sum_of_digits(unsigned int a){
	int c = 0;
	
	while(a>=10){
		unsigned int temp = a;
		unsigned int sum = 0;
		while(temp){
			sum += temp%10;
			temp = temp/10;
		}
		a = sum;
		c++;
	}
	
	return c;
}

int main(){
	unsigned int n;
	scanf("%u", &n);
	int count = sum_of_digits(n);
	printf("%d", count);
	return 0;
}
