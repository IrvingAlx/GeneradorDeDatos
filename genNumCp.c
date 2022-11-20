#include "defTipos.h"

int genNumsRandom(void);
void delay(int number_of_seconds);

//______________________________________________________________________________________//.

extern void numCodigoPost(void) {
	int i, j;
	int arreglo;

	arreglo = genNumsRandom();

	FILE *fp;
	fp = fopen("Archivos//cp.txt", "a");

	fprintf(fp, "%d\n", arreglo);
	printf("%d", arreglo);

	printf("\n");
	fclose(fp);
}
//______________________________________________________________________________________//.

int genNumsRandom(void) {
	int random = 0;
	int lower = 10000, upper = 99999;
	random = (rand() % (upper - lower + 1)) + lower;

	return random;
}

//______________________________________________________________________________________//.

void delay(int number_of_seconds) {
	// Converting time into milli_seconds
	int milli_seconds = 1000 * number_of_seconds;

	// Storing start time
	clock_t start_time = clock();

	// looping till required time is not achieved
	while (clock() < start_time + milli_seconds)
		;
}
