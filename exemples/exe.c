#include<stdio.h>
main()
{
	float a;
	float b;
	float x;
	printf("l'equation du premier degre est sous la forme ax+b==0\n");
	printf("entrez les a et b de votre equqtion\n");
	scanf("%f",&a);
	scanf("%f",&b);	
	printf("l'equation est\n");
	printf("%g*x+%g==0\n",a,b);
	if(a!=0)
	{
		x=b/a;
		printf("la solution de l'eqution est:%.2f\n",x);
		
	}	
    else
    {  
	printf("la solution n'existe pas");
	}
}