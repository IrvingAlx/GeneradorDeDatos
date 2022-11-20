/*
 * @file GeneradorDeDatos.c
 * @brief Elije que datos y la cantidad que se desea general
 * @details Muestra datos deseados por el usutaio a imprimir en un archivo de texto.
 *
 * @author
 *  Irving Alejandro
 * @date Fecha de creacion
 *  19 de Noviembre de 2022
 *
 * @author Desarrollador que realizo la ultima modificacion
 *  Irving Alejandro
 * @date Fecha de ultima modificacion 
 *  19 de Noviembre de 2022
*/

#include "defTipos.h"

void numTelefonico(void); // genera numeros telefonicos aleatoreaos 
void numCodigoPost(void); // genera codigos postales  
void menu(void); 					// muestra un menu
char evaluar(char temp);	// evalua si la letra ingresada ya existia o no
void selectorArch(int reg, int cant); 	// recibe la cantidad de datos solicitados y decide que hacer.



int main(int argc, char *argv[])
{
	srand(time(NULL));
	int i=0,x=1,j=0;
	int registro;
	int pichula;
	int calubai;
	char temp;


remove("reporte.txt"); 


	system("clear");
 	menu();

	printf("\tIngrese la cantidad de registros a generar \n\n\t");
		scanf(" %d",&registro);

	while(x==1)
	{
		printf("\n\tIngrese el dato que desea generar y presione enter %d \n\n\t", registro);
			scanf(" %c", &temp);
		printf("\n\tJuan %d \n\n\t", registro);
	
			dato[j]=evaluar(temp);
			if(temp == 'S')
			{
				x=0;
			}
		system("clear");
		menu();
			if(j==5)
			{
				x=0;
			}
		j++;
	}

	selectorArch(registro, j);

	for(j=0;j<6;j++)
	{
		printf("%c\t",dato[j]);
	} 

  return 0;
}

