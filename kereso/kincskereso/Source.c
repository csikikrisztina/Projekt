#include "Jatek.h"
#define _CRT_SECURE_NO_WARNINGS
#define _CRT_NONSTDC_NO_DEPRECATE
#define WIN32_LEAN_AND_MEAN
#include <stdio.h>

int main() {

	kiirErdo();
	morzsaHelye();
	int valaszt;
	printf("Ha folytatni szeredned a jatekot ird be az 1-t, ha kilepnel 0-t!\n");
	scanf_s("%i", &valaszt);
	if (valaszt == 1) {
		kiirErdo();
		morzsaHelye2();
	}
	else { return 0; }
	printf("Ha folytatni szeredned a jatekot ird be az 1-t, ha kilepnel 0-t!\n");
	scanf_s("%i", &valaszt);
	if (valaszt == 1) {
		kiirErdo();
		morzsaHelye3();
	}
	else { return 0; }
}