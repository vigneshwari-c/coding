#include<stdio.h>
#include<conio.h>
int main(){
	int i,j,k,n;
	printf("\nEnter the n value:");
	scanf("%d",&n);
	k=n+1/2;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(i==j){
				if(i<k){
					printf("%d",(n-i+1));
				}
				else{
					printf("%d",i);
				}
			}
			else if(i+j==n+1){
				if(i<k){
					printf("%d",i);
				}
				else {
					printf("%d",j);
				}
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
}
