#include "Jatek.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>
#include <Windows.h>


//kirajzolja a palyat
void kiir() {
	printf("\nAz Erdo: \n");
	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= 5; j++) {

			printf("*");
		}
		printf("\n");
	}
	
}
//kirajzolja a palyat, miutan a jatekos mar tippelt morzsa lehetseges helyere
void kiirErdo(int tippX, int tippY){

	printf("\nAz Erdo: \n");
	for (int i = 1; i <= 5; i++) {
		for (int j=1 ; j <= 5; j++) {
			if (i == tippX && j == tippY) {
				printf("J");
			}
			 else {
				printf("*");
			}
		}
		printf("\n");
	}
	
}
//az elso szint, bekeri a jatekostol a tippeket, kigeneralja a morzsa helyet, szamolja az osszegyujtott morzsakat
void morzsaHelye(int morzsaX, int morzsaY, int tippX, int tippY)
{
	int megtalalt = 0;
	bool talalat = false;
	srand(time(0));
	for (int i = 0; i < 10; i++) {
		printf("Irj be ket 1 es 5 kozotti szamot: \n");
		scanf_s("%i", &tippX);
		if (tippX <= 0 || tippX > 5) {
			printf("Nem jo szamot irtal be, irj ujat!\n");
			scanf_s("%i", &tippX);
		}
		scanf_s("%i", &tippY);
		if (tippY <= 0 || tippY > 5) {
			printf("Nem jo szamot irtal be, irj ujat!\n");
			scanf_s("%i", &tippY);
		}
		for (int i = 0; i < 15; i++) {
			morzsaX = rand() % 4 + 1;
			morzsaY = rand() % 4 + 1;
			if (tippX == morzsaX && tippY == morzsaY) {
				talalat = true;
				++megtalalt;
				break;
			}
			else {
				talalat = false;
			}
		}
		
		if (talalat) {
			printf("Megtalaltal egy morzsat!\n");
		}
		else {
			printf("Nem talalt, keress tovabb!\n");
		}
		printf("\n");
		kiirErdo(tippX, tippY);
	}
		
	printf("Megtalalt morzsak szama: %i\n", megtalalt);
	if (megtalalt >= 5) {
		printf("Eleg morzsat gyujtottel ahhoz, hogy Jancsi es Juliska hazatalaljon!\n");
	}
	else {
		printf("Nem sikerul eleg morzsat gyujtened, hogy hazajuttasd Jancsit es Juliskat!\n");
	}
}
//a masodik szint, bekeri a jatekostol a tippeket, kigeneralja a morzsa helyet, szamolja a pontokat
void morzsaHelye2(int morzsaX, int morzsaY, int tippX, int tippY)
{
	int pontszam = 0;
	bool talalat = false;
	srand(time(0));
	printf("Minden megtalalt morzsaert 5 pontot kapsz, minden sikertelen talalatert 2 pont levonast!\n\n");
	for (int i = 0; i < 10; i++) {
		printf("Irj be ket 1 es 5 kozotti szamot: \n");
		scanf_s("%i", &tippX);
		if (tippX <= 0 || tippX > 5) {
			printf("Nem jo szamot irtal be, irj ujat!\n");
			scanf_s("%i", &tippX);
		}
		scanf_s("%i", &tippY);
		if (tippY <= 0 || tippY > 5) {
			printf("Nem jo szamot irtal be, irj ujat!\n");
			scanf_s("%i", &tippY);
		}
		for (int i = 0; i < 12; i++) {
			morzsaX = rand() % 4 + 1;
			morzsaY = rand() % 4 + 1;
			if (tippX == morzsaX && tippY == morzsaY) {
				talalat = true;
				break;
			}
			else {
				talalat = false;
			}
		}

		if (talalat) {
			printf("Megtalaltal egy morzsat!\n");
			pontszam += 5;
			printf("Pontszamod: %i\n", pontszam);
		}
		else {
			printf("Nem talalt, keress tovabb!\n");
			pontszam -= 2;
			printf("Pontszamod: %i\n", pontszam);
		}
		printf("\n");
		kiirErdo(tippX,tippY);


	}

	printf("Vegso pontszamod: %i\n", pontszam);
	if (pontszam >= 10) {
		printf("Eleg morzsat gyujtottel ahhoz, hogy Jancsi es Juliska hazatalaljon!\n");
	}
	else {
		printf("Nem sikerult eleg morzsat gyujtened, hogy hazajuttasd Jancsit es Juliskat!\n");
	}
}
//a harmadik szint, bekeri a jatekostol a tippeket, kigeneralja a morzsa helyet, szamolja a pontokat, meri az idot
void morzsaHelye3(int morzsaX, int morzsaY, int tippX, int tippY)
{
	int pontszam = 0;
	int probalkozas = 0;
	int megtalalt = 0;
	bool talalat = false;
	time_t currentTime, startTime;
	startTime = time(0); 
	srand(time(0));
	printf("Minden megtalalt morzsaert 5 pontot kapsz, minden sikertelen talalatert 2 pont levonast!\n\n");
	while(1) {
		currentTime = time(0);
		printf("Irj be ket 1 es 5 kozotti szamot: \n");
		scanf_s("%i", &tippX);
		if (tippX <= 0 || tippX > 5) {
			printf("Nem jo szamot irtal be, irj ujat!\n");
			scanf_s("%i", &tippX);
		}
		scanf_s("%i", &tippY);
		if (tippY <= 0 || tippY > 5) {
			printf("Nem jo szamot irtal be, irj ujat!\n");
			scanf_s("%i", &tippY);
		}
		for (int i = 0; i < 8; i++) {
			morzsaX = rand() % 4 + 1;
			morzsaY = rand() % 4 + 1;
			if (tippX == morzsaX && tippY == morzsaY) {
				talalat = true;
				++megtalalt;
				break;
			}
			else {
				talalat = false;
			}
		}

		if (talalat) {
			printf("Megtalaltal egy morzsat!\n");
			pontszam += 5;
			printf("Pontszamod: %i\n", pontszam);
		}
		else {
			printf("Nem talalt, keress tovabb!\n");
			pontszam -= 2;
			printf("Pontszamod: %i\n", pontszam);
		}
		++probalkozas;
		printf("\n");
		kiirErdo(tippX, tippY);
		if (currentTime - startTime > 15) {
					printf("Lejart az idod!\n Jatek vege.\n\n");
					break;
				}
	}
	printf("Vegso pontszamod: %i\n", pontszam);
	if (pontszam >= 0) {
		printf("Eleg morzsat gyujtottel ahhoz, hogy Jancsi es Juliska hazatalaljon!\n");
	}
	else {
		printf("Nem sikerult eleg morzsat gyujtened, hogy hazajuttasd Jancsit es Juliskat!\n");
	}
}

