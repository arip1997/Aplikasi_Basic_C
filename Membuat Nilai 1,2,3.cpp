#include <stdio.h>

	int main (){
	
	int nilai_1,nilai_2,nilai_3;
	float hasil;
	
	printf("Masukkan Nilai 1 :");
	scanf ("%i", &nilai_1);
	printf("Masukkan Nilai 2 :");
	scanf ("%i", &nilai_2);
	printf("Masukkan Nilai 3:");
	scanf ("%i", &nilai_3);
hasil=(nilai_1+nilai_2+nilai_3)/3.0;
if (hasil>=75)
		printf ("LULUS \n");
else
	printf ("TIDAK LULUS \n");
}
