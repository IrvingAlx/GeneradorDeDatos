#include "defTipos.h"

int generadorNumsRandom(void);
void delay2(int number_of_seconds);

//______________________________________________________________________________________//.

extern void numTelefonico(void) {
	int i, j;
	int arreglo[3] = {0};

	for (i = 0; i < 3; i++) {
		if (i < 1) {
			arreglo[i] = 55;
		} else {
			arreglo[i] = generadorNumsRandom();
		}
	}
	FILE *fp;

	fp = fopen("Archivos//telefonos.txt", "a");
	for (j = 0; j < 3; j++) {
		fprintf(fp, "%d", arreglo[j]);
		printf("%d", arreglo[j]);
	}
	fprintf(fp, "\n");
	printf("\n");
	fclose(fp);
}
//______________________________________________________________________________________//.

int generadorNumsRandom(void) {
	int random = 0;
	int lower = 1000, upper = 9999;
	random = (rand() % (upper - lower + 1)) + lower;

	return random;
}

//______________________________________________________________________________________//.

void delay2(int number_of_seconds) {
	// Converting time into milli_seconds
	int milli_seconds = 1000 * number_of_seconds;

	// Storing start time
	clock_t start_time = clock();

	// looping till required time is not achieved
	while (clock() < start_time + milli_seconds)
		;
}
