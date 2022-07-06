#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include "Header.h"

int main(void) {
	char elect = '1';


	while (elect) {
		elect = izbornik();
	}
	printf("\t\t  Hvala na sudjelovanju!\n");

	return 0;
}