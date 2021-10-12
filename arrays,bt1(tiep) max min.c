#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int sl,max,min;
	printf("nhap so luong mang can co :");
	scanf("%d",&sl);
	int mang[sl],i;
	for(i=0;i<sl;i++){
		printf("\nNhap gia tri thu %d cua mang ",i+1);
		scanf("%d",&mang[i]);
		if(i==0){
			max=mang[0];
			min=mang[0];
		}else{
			if(mang[i]>max) 
			   max=mang[i];
			if(mang[i]<min)
			   min=mang[i];
		}
	}
	printf("\nmax = %d",max);
	printf("\nmin = %d",min);
	
	return 0;
}
