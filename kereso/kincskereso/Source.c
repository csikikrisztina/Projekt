#include "Jatek.h"
#define _CRT_SECURE_NO_WARNINGS
#define _CRT_NONSTDC_NO_DEPRECATE
#define WIN32_LEAN_AND_MEAN
#include <stdio.h>

int main() {
	time_t currentTime, startTime;
	startTime = time(0);
	Letrehoz();
	kiirErdo();
	while (1) {
		currentTime = time(0);
		morzsaHelye();
		//pontszam();
		if (currentTime - startTime > 30) {
			printf("Lejart az idod!\n Jatek vege.\n");
			break;
		}
	}
	
	//tippHelye();
	
	//talalat_e();

}