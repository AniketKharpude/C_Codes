#include<stdio.h>
#include<conio.h>

int main(){
	//int n;
	//printf("enter valu for n: \n");
	//scanf("%d",&n);
// 	int i , j;
// 	for(i=1 ; i<=4 ; i++ ){
// 	for(j=4 ; j>=i ; j--){
// 		printf("*");
// 	}
// 		printf("\n");
//  }
 int x, y, n;
 printf("enter value of base row: \t");
 scanf("%d",&n);
 for(x=1; x<=n; x++) {

	 for(y=1; y<=x; y++) {
		 printf("*");
	 }
		printf("\n");
 }
// int z;
//  printf("enter value of  row: \t");
// scanf("%d",&z);
//  for(x=1; x<=n; x++){
// 												// printing rows and columns
// 	 for(y=1; y<=z; y++){
// 		 printf("^");
// 	 }
// 	 printf("\n");
//  }
	return 0;
}

