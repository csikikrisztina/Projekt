#include "Jatek.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>
#include <Windows.h>

void kiirErdo(Morzsa* tippX,Morzsa *tippY)
{
	
	printf("\nAz Erdo: \n");
	for (int i = 1; i <= 6; i++) {
		for (int j=1 ; j <= 6; j++) {
			if (i == tippX && j == tippY) {
				printf("X");
			}
			/*if (erdo[i][j] == 'X') {
				printf("x");
			}*/
			 else {
				printf("*");
			}
		}
		printf("\n");
	}
	
}

Morzsa* Letrehoz()
{
	
	Morzsa* morzsaX = (int*)calloc(10, sizeof(int));
	if (!morzsaX) { printf("Sikertelen helyfoglalas"); return 0; }
	Morzsa* morzsaY = (int*)calloc(10, sizeof(int));
	if (!morzsaY) { printf("Sikertelen helyfoglalas"); return 0; }
	Morzsa* tippX = (int*)calloc(10, sizeof(int));
	if (!tippX) { printf("Sikertelen helyfoglalas"); return 0; }
	Morzsa* tippY = (int*)calloc(10, sizeof(int));
	if (!tippY) { printf("Sikertelen helyfoglalas"); return 0; }
	/*char** erdo = (char**)calloc(6, sizeof(char*));
	for (int i = 0; i < 6; i++) {
		erdo[i] = (char*)calloc(6, sizeof(char));
	}
	if (!erdo) { printf("Sikertelen helyfoglalas"); return 0; }*/
	
}

void Pontszam(bool talalat)
{
	int pontszam = 0; 
	talalat = false;
	while (1) {
		if (talalat) {
			pontszam += 10;
			printf("Osszegyujtott pontok: %i\n", pontszam);
			break;
		}
		else {
			pontszam -= 2;
			printf("Osszegyujtott pontok: %i\n", pontszam);
			break;
		}
		
	}
	
}


void morzsaHelye(Morzsa* morzsaX, Morzsa* morzsaY, Morzsa* tippX, Morzsa* tippY, bool talalat)
{
	//int pontszam = 0;
	talalat = false;
	srand(time(0));
	printf("Irj be ket 1 es 6 kozotti szamot: \n");
	scanf_s("%i", &tippX);
	if (tippX <= 0 || tippX > 6) {
		printf("Nem jo szamot irtal be, irj ujat!\n");
			scanf_s("%i", &tippX);
	}
	scanf_s("%i", &tippY);
	if ((tippX <= 0 || tippX > 6) || (tippY <= 0 || tippY > 6)) {
		printf("Nem jo szamot irtal be, irj ujat\n!");
			scanf_s("%i", &tippY);
	}
	for (int i = 0; i < 15; i++) {
		morzsaX = rand() % 6 + 1;
		morzsaY = rand() % 6 + 1;
	}
		if (tippX == morzsaX && tippY == morzsaY) {
			talalat = true;
		}
		else {
			talalat = false;
		}

		if (talalat) {
			printf("Megtalaltal egy morzsat!\n");
			Pontszam(talalat);	
		}
		else {
			printf("Nem talalt, keress tovabb!\n");
			Pontszam(talalat);	
		}
		printf("\n");
		kiirErdo(tippX, tippY);
}
