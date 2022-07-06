#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "Header.h"

char izbornik(void) {

	printf("\n\t\t\t\t*********************************************");

	printf("\n\t\t\t\t\t   D o b r o d o s l i\n ");
	printf("\n\t\t\t\t\t             u\n ");
	printf("\n\t\t\t\t\t      Paltana Pub Kviz ");
	printf("\n\t\t\t\t");
	printf("\n\t\t\t\t*********************************************");
	
	printf("\n > Opcija 1: zapocnite igru");
	printf("\n > Opcija 2: pretrazivaje igraca na rang ljestvici");
	printf("\n > Opcija 3: pogledajte rang ljestvicu");
	printf("\n > Opcija 4: pregled pitanja");
	printf("\n > Opcija 5: dodavanje pitanja");
	printf("\n > Opcija 6: pomoc");
	printf("\n > Opcija 7: izlaz iz programa");
	printf("\n________________________________________\n\n");

	char elect;
	printf("\tOdaberite jednu od opcija: ");

	scanf("%c", &elect);
	
	getchar();

	switch (elect) {
	case '1':
		start();
		break;
	case '2':
		Hsearch();
		break;
	case '3':
		highscore();
		break;
	case '4':
		Qlookout();
		break;
	case '5':
		admnistrator();
		Qadd();
		break;
	case '6':
		helpdesk();
		break;
	case '7':
		elect = quit();
		break;
	default:
		printf("\n\t\tKrivi odabir! Unesite neku od ponudjenih opcija\n");
		while ((elect = getchar()) != '\n' && elect != EOF) {}
		printf("\n\t\t");
		system("pause");
		system("cls");
		break;
	}
	return elect;
}
