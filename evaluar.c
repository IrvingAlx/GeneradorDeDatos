#include "defTipos.h"

extern char evaluar(char temp) {
	char bueno;
	int i = 0, j = 0;
	bueno = temp;
	printf("\tTemp vale %c\n\n\t", temp);

	while (i == 0) {
		if (temp == dato[i]) {
			printf("\tFavor de ingresar otra letra aun no usada\n\n\t");
			scanf("%s", &bueno);
			j = 1;
		}
		i++;
	}

	printf("\tBueno vale %c\n\n\t", bueno);

	return bueno;
}