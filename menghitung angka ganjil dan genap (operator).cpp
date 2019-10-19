#include <stdio.h>

int main (){
	int a,b,c;
	
	printf("masukkan nilai A=");scanf("%i",&a);
	printf("masukkan nilai B=");scanf("%i",&b);
	
	c=a+b;
	if(0==c%2){
		printf ("Genap Hasil=%i,c");
	}else{
		c+=1;
		printf("Ganjil namun di tambah 1, hasil=%i",c);
	}
	
}
