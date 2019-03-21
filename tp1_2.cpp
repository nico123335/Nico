#include <stdio.h>
#include <ctype.h>

void invertir(int *a,int *b);
int calcular(int num);
void calcular2(int num,int *result);
//---------------------------------------------
int main(){
	int a,b;
	int num;
	int result;
	int *puntn;
	int *puntr;
	puntn=&num;
	printf("Calcular el cuadrado de:" );
 	while(scanf("%d",&num) != 1){
        printf("Debe ser un numero: ");
        while(getchar() != '\n');
    }
	//result=calcular(num);
	calcular2(num,&result);
	printf("-----------------------------------------------\n");
	printf("Contenido de la variable: %d\n", *puntn);
	printf("Direccion de memoria de la variable: %u\n", puntn);
	printf("-----------------------------------------------\n");
	printf("%d^2: %d\n",num, result);
	printf("introduzca 'a': ");
	scanf("%d",&a);
	printf("introduzca 'b': ");
	scanf("%d",&b);
	if(a>b){
		invertir(&a,&b);
	}
	printf("\na:%d\nb:%d\n",a,b);
	return 0;
}
//---------------------------------------------------------
int calcular(int num)
{
	int result=num * num;
	return result;
}
void calcular2(int num,int *result)
{
	*result=num * num;
	return;
}
void invertir(int *a,int *b){
	int c=*a;
	*a=*b;
	*b=c;
}