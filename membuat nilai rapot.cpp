#include <stdio.h>

int main(){
	int Nilai;
	printf("Nilai = ");scanf("%i", &Nilai);
	if(Nilai>=75)\{ 
		printf("LULUS\n");
	}else if (Nilai>=60){
		printf ("REMIDI\n");
	}else{
		printf("TIDAK LULUS\n");
	}
}
