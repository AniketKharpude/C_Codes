#include<stdio.h>
int main()
{
	int score[5];
	int h;
FILE * in = fopen("text.txt","r");
for ( h = 0; h < 6; h++){

 fscanf(in, "%d", &score[h]);
}
 for ( h = 0; h < 6; h++) {
 fscanf(in, "%d", &score[h]);
 printf("%d\n", score[h]); 
}
}
