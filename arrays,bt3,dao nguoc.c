#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int mang[5],i,x;
	for(i=0;i<5;i++){
		printf("Nhap gia tri thu %d cho mang ",i+1);
		scanf("%d",&mang[i]);
	}
	for(i=0;i<5/2;i++){
		x=mang[i];
		mang[i]=mang[4-i];
		mang[4-i]=x;
	}
	printf("\n\n\tDao nguoc thanh\n");
	for(i=0;i<5;i++){
		printf("%d\n",mang[i]);
	}
	return 0;
}
