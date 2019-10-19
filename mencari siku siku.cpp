#include <stdio.h>

int main(){
int bilangan_1,bilangan_2,bilangan_3;

	printf("Masukkan Bilangan_1 :");scanf ("%i", &bilangan_1);
	printf("Masukkan Bilangan_2 :");scanf ("%i", &bilangan_2);
	printf("Masukkan Bilangan_3 :");scanf ("%i", &bilangan_3);
if (bilangan_1==bilangan_2){
	printf("SIKU - SIKU");
}else if(bilangan_1==bilangan_3){
	printf("SIKU-SIKU");
}else if(bilangan_2==bilangan_3){
	printf("SIKU-SIKU");
}else{
	printf("BUKAN SIKU-SIKU");
}

return 0;
}
