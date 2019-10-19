#include <stdio.h>

int main(){
	int bilangan = 19;
	int hasil;
	
	printf("Program untuk menjalanakan Assignment Operator\n\n");
	
	hasil = bilangan;
	printf("Assignment Operator, hasil =%d\n",hasil);
	
	hasil+= bilangan;
	printf("Assignment Operator, hasil +=%d\n",hasil);
	
	hasil-= bilangan;
	printf("Assignment Operator, hasil -+%d\n",hasil);
	
	hasil*= bilangan;
	printf("Assignment Operator, hasil *=%d\n",hasil);
	
	hasil/= bilangan;
	printf("Assignment Operator, hasil /=%d\n",hasil);
	
	hasil=350;
	hasil%= bilangan;
	printf("Assignment Operator, hasil %= %d\n",hasil);
}
