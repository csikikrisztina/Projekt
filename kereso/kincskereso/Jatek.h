#pragma once
#ifndef JATEK_H
#define JATEK_H
#define _CRT_SECURE_NO_WARNINGS
#define _CRT_NONSTDC_NO_DEPRECATE
#define WIN32_LEAN_AND_MEAN

typedef struct Morzsa {
	int morzsaX;
	int morzsaY;
	int tippX;
	int tippY;
}Morzsa;

//kirajzolja a terkepet
void kiirErdo();
//helyfoglalas
Morzsa* Letrehoz();
//kigeneralja a morzsa helyet
void morzsaHelye();
//szamolja a jatekos pontszamait
void Pontszam();


#endif // !JATEK_H

