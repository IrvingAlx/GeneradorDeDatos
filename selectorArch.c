#include "defTipos.h"

int genRandom(void); // genera numero aleatorio para elejir dato
char palabras(char archivo[]);

void selectorArch(int reg, int cant) {
	FILE *fp;
	char buffer[40];
	char nombre[20] = {"Archivos//nombre.txt"};

	int i = 0, x = 0, temp = 0;

	fp = fopen("Archivos//reporte.txt", "a");
	for (i = 0; i <= reg - 1; i++) {
		while (x <= cant - 1) {
			switch (dato[x]) {
			case 'A':
				*buffer = palabras(NOMBRE);
				break;
			case 'B':
				*buffer = palabras(APELLIDOP);
				break;
			case 'C':
				*buffer = palabras(APELLIDOM);
				break;
			case 'D':
				*buffer = palabras(TELEFONO);
				break;
			case 'E':
				*buffer = palabras(CODIGOPOSTALE);
				break;
			case 'F':
				*buffer = palabras(TRABAJOS);
				break;
			case 'S':
				printf("\n");
				fprintf(fp, "\n");
				break;
			default:
				printf("\n\tSi estas viendo esto algo salio muy mal\n\n\t");
			}
			x++;
		}
		x = 0;
	}

	fclose(fp);
}

int genRandom(void) {
	int random = 0;
	int lower = 1, upper = 621;
	random = (rand() % (upper - lower + 1)) + lower;

	return random;
}

char palabras(char archivo[]) {
	char buffer[20], palabra[20];
	int random = 0, i = 0;

	random = genRandom();

	FILE *fp_rep;
	FILE *fp;
	fp_rep = fopen("Archivos//reporte.txt", "a");
	fp = fopen(archivo, "r");
	if (fp == NULL) {
		printf("\nArchivo no disponible.");
		exit(1);
	}
	while (fscanf(fp, "%[^\n]\n", buffer) == 1) {
		if (i == random) {
			printf("%s\t", buffer);
			fprintf(fp_rep, "%s\t", buffer);
			break;
		}
		i++;
	}
	fclose(fp);
	fclose(fp_rep);

	return *palabra;
}