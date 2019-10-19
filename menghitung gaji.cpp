#include <stdio.h>

	int main (){
		int gaji_pokok;
		int uang_makan;
		int uang_transport;
		int total_gaji;
		
		printf("Masukkan Gaji Pokok : ");
		scanf("%i", &gaji_pokok);
		printf("Masukkan Uang Makan");
		scanf("i", &uang_makan);
		printf("Masukkan Uang Transport");
		total_gaji=gaji_pokok+uang_makan+uang_transport;
		
		if (total_gaji>1000000){
 		total_gaji=total_gaji*0.1;
 		printf("%i",total_gaji);
		}else if(total_gaji<1000000){
			printf("%i",total_gaji);
		} 
		return 0;
		}
