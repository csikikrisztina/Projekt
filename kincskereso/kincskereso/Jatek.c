#include "Jatek.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void kiirTerkep()
{
	printf("A kincsesterkep: \n");
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {

			printf("*");
		}
		printf("\n");
	}
	printf("Irj be ket 1 es 6 kozotti szamot:\n");
}

void kincsHelye()
{
	int* x, *y;
	x = (int*)calloc(10, sizeof(int));
	if (!x) { printf("Sikertelen helyfoglalas"); return 0; }
	y = (int*)calloc(10, sizeof(int));
	if (!y) { printf("Sikertelen helyfoglalas"); return 0; }
	srand(time(0));
	for (int i = 0; i < 6; i++) {
		x[i] = rand() % 6 + 1;
		y[i] = rand() % 6 + 1;
		printf("%i ", x[i]);
		printf("%i ", y[i]);
		printf("\n");
		
	}

}
