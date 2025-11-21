#include<stdio.h>
int main(){
	int N, sum, count ;
	scanf("%d", & N );
	sum=0;
	for(count = 1; count<=N; ++count){
	sum+= count;
    }
	 printf("Sum=%d ", sum);
	 return 0;
	 
}