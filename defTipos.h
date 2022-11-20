#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define NOMBRE "Archivos//nombres.txt"
#define APELLIDOP "Archivos//apellidoP.txt"
#define APELLIDOM "Archivos//apellidoM.txt"
#define TELEFONO "Archivos//telefonos.txt"
#define CODIGOPOSTALE "Archivos//cp.txt"
#define TRABAJOS "Archivos//empleos.txt"

struct elemento {
	char nombre[20];
	char apellidoP[20];
	char apellidoM[20];
	char telefono[20];
	int codigoPostal[20];
	char trabajos[20];

	struct elemento *der, *izq;
};

typedef struct elemento nodo;

char dato[6];
