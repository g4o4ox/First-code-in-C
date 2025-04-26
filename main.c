#include <stdio.h>
#include <stdlib.h>

int main(){
	int val1,val2,menu,calc;
	 
	// variavel vazia !!! 
	// quando for passar o valor da variavel por scanf usar o '&', printf("%d",&val1)


	printf("My first calculator in C !!! \n");

	printf("Primeiro Valor: ");
	scanf("%d", &val1	);
	printf("Segundo Valor: ");
	scanf("%d", &val2);
	
	printf("Escolha a operação !!! \n [1] Adição \n [2] Subtração \n [3] Multiplicação \n [4] Divisão. \n : " );
	scanf("%d", &menu);
	if(menu == 1){
		calc = val1+val2;
		printf("%d",calc);
	}else if (menu == 2)
	{
		calc= val1-val2;
		printf("%d",calc);
	}else if(menu == 3){
		calc = val1*val2;
		printf("%d",calc);
	}else{
		calc = val1/val2;
		printf("%d",calc);
	}
	return 0;
	

}
