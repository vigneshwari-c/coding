#include<stdio.h>
#include<conio.h>
int main(){
	int n,i,s,j,k,m,l;
	printf("\nEnter the n value:");
	scanf("%d",&n);
	m=n/2; 

	for(i=m;i<=m+2;i=i+2){
		for(k=i;k<=m;k++){
			printf("  ");
		}
	    for(j=1;j<=i;j++){
	    	printf("* ");
		}

			for(s=1;s<=n-i;s++){
			printf("  ");
		}
	    for(l=1;l<=i;l++){
	    	printf(" *");
		}
			printf("\n");
	}
	for(i=n;i>=1;i--){
		for(j=1;j<=2*i-1;j++){
			printf("* ");
		}printf("\n");
		for(k=i;k<=n;k++){
			printf("  ");
		}
	}
}
