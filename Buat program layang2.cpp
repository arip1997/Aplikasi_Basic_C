#include <stdio.h>
#include  <math.h>

	int main(){
		int a,b;
		float c;
		printf ("Nilai a=");scanf("%i",&a);
		printf ("Nilai b=");scanf("%i",&b);
		c= sqrt((a*a)+pow(b,2));
		printf("Nilai c= %f\n",c);
	}
