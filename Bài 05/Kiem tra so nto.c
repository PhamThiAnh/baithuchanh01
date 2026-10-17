#include<stdio.h>
#include<math.h> 
int main(){
	int n,i;
	int a=1;
	printf("Nhap so nguyen N:");
	scanf("%d",&n);
	if(n<2){
		a=0; 
	}
	else{
		for(i=2;i<=sqrt(n);i++){
			if(n%i==0){
				a=0;
				break; 
			} 
		}
	} 
	if(a==1){
		printf("%d la so nguyen to.\n",n); 
	} 
	else{
		printf("%d khong phai là so nguyen to.\n",n); 
	} 
	return 0; 
	
} 
