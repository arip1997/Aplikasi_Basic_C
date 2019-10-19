#include <stdio.h>
#include <math.h>
int main (){
	int dl,d2;
	float d1_lper4,d1_3per4,d2_setengah,diag1,diag2,keliling;
	printf ("d1 =");scanf("%i",&d1);
	printf ("d2 =");scanf("%i",&d2);
	d2_setengah=d2/2;
	d1_1per4=d1*1/4;
	d1_3per4=d1*3/4;
	diag1=sqrt((pow(d1_3per4,2))+(pow(d2_setengah,2)));
	diag2=sqrt((pow(d1_1per4,2))+(pow(d2_setengah,2)));
	keliling=2*(diag1*diag2);
	printf("keliling=%f,keliling")
	return 0;
} 
