#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>
#include "Header.h"

static int Qnum = 0;
static QUESTION* Qarray = NULL;
static int counter = 0;

void start(void) {

	system("cls");

	HIGHSCORE igrac;
	int fiftyJ = 1, callJ = 1, crowdJ = 1;
	int r1 = 1, count = 0, granica = 0, var, j;
	char znak;

	printf("\n\n\n\n\t\t\tUnesite svoje ime: ");
	scanf("%s", igrac.ime);
	system("cls");


	FILE* hp = NULL;
	hp = fopen("highscore.bin", "ab+");
	if (hp == NULL) {
		printf("\nDatoteka se ne moze otvoriti.\n");
		perror("Otvaranje");
	}

	Qarray = (QUESTION*)Qload();
	if (Qarray == NULL) {
		perror("Zauzimanje memorije za sortirana pitanja");
		exit(EXIT_FAILURE);
	}

	QUESTION back;
	char tocno;

	do {
		switch (r1) {
		case 1:
			printf("\n\t********** Pitanje za 100 **********");
			back = Asort(Qarray, 1);
			tocno = Qprint(back);
			Jcheck(crowdJ, fiftyJ, callJ);
			printf("\n\tDa bi ste odustali odaberite \"O\"");
			j = 1;
			do {
				printf("\n\tUnesite vas odgovor: ");
				znak = getch();
				if (znak == 'j') {
					printf("\n\tUnesite zeljeni joker: ");
					scanf("%d", &var);
					if (var == 1) {
						Jcrowd(tocno, crowdJ);
						crowdJ = -1;
						j = 1;
					}
					if (var == 2) {
						Jfifty(back, fiftyJ, tocno);
						fiftyJ = -1;
						j = 1;
					}
					if (var == 3) {
						Jcall(tocno, callJ);
						callJ = -1;
						j = 1;
					}
				}
				else if (znak == tocno)
				{
					printf("\n\n\t\tTocno!!!");
					count = 100;
					r1++;
					j = 0;
					printf("\n\t");
					system("pause");
					system("cls");
					break;
				}
				else if (znak == 'o') {
					printf("\n\tOdustali ste\n");
					count = 0;
					r1 = 0;
					printf("\n\t");
					system("pause");
					system("cls");
					break;
				}
				else
				{
					printf("\n\n\tNetocno!!! Tocan odgovor je pod %c:%s", toupper(tocno), back.ans1);
					count = 0;
					j = 0;
					r1 = 0;
					printf("\n\t");
					system("pause");
					system("cls");
					break;
				}
			} while (j);
			break;

		case 2:
			printf("\n\t********** Pitanje za 200 **********");
			back = Asort(Qarray, 2);
			tocno = Qprint(back);
			Jcheck(crowdJ, fiftyJ, callJ);
			printf("\n\tDa bi ste odustali odaberite \"O\"");
			j = 1;
			do {
				printf("\n\tUnesite vas odgovor: ");
				znak = getch();
				if (znak == 'j') {
					printf("\n\tUnesite zeljeni joker: ");
					scanf("%d", &var);
					if (var == 1) {
						Jcrowd(tocno, crowdJ);
						crowdJ = -1;
						j = 1;
					}
					if (var == 2) {
						Jfifty(back, fiftyJ, tocno);
						fiftyJ = -1;
						j = 1;
					}
					if (var == 3) {
						Jcall(tocno, callJ);
						callJ = -1;
						j = 1;
					}
				}
				else if (znak == tocno)
				{
					printf("\n\n\t\tTocno!!!");
					count = 200;
					r1++;
					j = 0;
					printf("\n\t");
					system("pause");
					system("cls");
					break;
				}
				else if (znak == 'o') {
					printf("\n\tOdustali ste\n");
					count = 100;
					r1 = 0;
					printf("\n\t");
					system("pause");
					system("cls");
					break;
				}
				else
				{
					printf("\n\n\tNetocno!!! Tocan odgovor je pod %c:%s", toupper(tocno), back.ans1);
					count = 0;
					j = 0;
					r1 = 0;
					printf("\n\t");
					system("pause");
					system("cls");
					break;
				}
			} while (j);
			break;

		case 3:
			printf("\n\t********** Pitanje za 300 **********");
			back = Asort(Qarray, 3);
			tocno = Qprint(back);
			Jcheck(crowdJ, fiftyJ, callJ);
			printf("\n\tDa bi ste odustali odaberite \"O\"");
			j = 1;
			do {
				printf("\n\tUnesite vas odgovor: ");
				znak = getch();
				if (znak == 'j') {
					printf("\n\tUnesite zeljeni joker: ");
					scanf("%d", &var);
					if (var == 1) {
						Jcrowd(tocno, crowdJ);
						crowdJ = -1;
						j = 1;
					}
					if (var == 2) {
						Jfifty(back, fiftyJ, tocno);
						fiftyJ = -1;
						j = 1;
					}
					if (var == 3) {
						Jcall(tocno, callJ);
						callJ = -1;
						j = 1;
					}
				}
				else if (znak == tocno)
				{
					printf("\n\n\t\tTocno!!!");
					count = 300;
					r1++;
					j = 0;
					printf("\n\t");
					system("pause");
					system("cls");
					break;
				}
				else if (znak == 'o') {
					printf("\n\tOdustali ste\n");
					count = 200;
					r1 = 0;
					printf("\n\t");
					system("pause");
					system("cls");
					break;
				}
				else
				{
					printf("\n\n\tNetocno!!! Tocan odgovor je pod %c:%s", toupper(tocno), back.ans1);
					count = 0;
					j = 0;
					r1 = 0;
					printf("\n\t");
					system("pause");
					system("cls");
					break;
				}
			} while (j);
			break;

		case 4:
			printf("\n\t********** Pitanje za 500 **********");
			back = Asort(Qarray, 4);
			tocno = Qprint(back);
			Jcheck(crowdJ, fiftyJ, callJ);
			printf("\n\tDa bi ste odustali odaberite \"O\"");
			j = 1;
			do {
				printf("\n\tUnesite vas odgovor: ");
				znak = getch();
				if (znak == 'j') {
					printf("\n\tUnesite zeljeni joker: ");
					scanf("%d", &var);
					if (var == 1) {
						Jcrowd(tocno, crowdJ);
						crowdJ = -1;
						j = 1;
					}
					if (var == 2) {
						Jfifty(back, fiftyJ, tocno);
						fiftyJ = -1;
						j = 1;
					}
					if (var == 3) {
						Jcall(tocno, callJ);
						callJ = -1;
						j = 1;
					}
				}
				else if (znak == tocno)
				{
					printf("\n\n\t\tTocno!!!");
					count = 500;
					r1++;
					j = 0;
					printf("\n\t");
					system("pause");
					system("cls");
					break;
				}
				else if (znak == 'o') {
					printf("\n\tOdustali ste\n");
					count = 500;
					r1 = 0;
					printf("\n\t");
					system("pause");
					system("cls");
					break;
				}
				else
				{
					printf("\n\n\tNetocno!!! Tocan odgovor je pod %c:%s", toupper(tocno), back.ans1);
					count = 0;
					j = 0;
					r1 = 0;
					printf("\n\t");
					system("pause");
					system("cls");
					break;
				}
			} while (j);
			break;

		case 5:
			printf("\n\t********** Pitanje za 1000 **********");
			back = Asort(Qarray, 5);
			tocno = Qprint(back);
			Jcheck(crowdJ, fiftyJ, callJ);
			printf("\n\tDa bi ste odustali odaberite \"O\"");
			do {
				printf("\n\tUnesite vas odgovor: ");
				znak = getch();
				if (znak == 'j') {
					printf("\n\tUnesite zeljeni joker: ");
					scanf("%d", &var);
					if (var == 1) {
						Jcrowd(tocno, crowdJ);
						crowdJ = -1;
						j = 1;
					}
					if (var == 2) {
						Jfifty(back, fiftyJ, tocno);
						fiftyJ = -1;
						j = 1;
					}
					if (var == 3) {
						Jcall(tocno, callJ);
						callJ = -1;
						j = 1;
					}
				}
				else if (znak == tocno)
				{
					printf("\n\n\t\tTocno!!!");
					count = 1000;
					r1++;
					j = 0;
					printf("\n\t");
					system("pause");
					system("cls");
					break;
				}
				else if (znak == 'o') {
					printf("\n\tOdustali ste\n");
					count = 1000;
					r1 = 0;
					printf("\n\t");
					system("pause");
					system("cls");
					break;
				}
				else
				{
					printf("\n\n\tNetocno!!! Tocan odgovor je pod %c:%s", toupper(tocno), back.ans1);
					count = 0;
					j = 0;
					r1 = 0;
					printf("\n\t");
					system("pause");
					system("cls");
					break;
				}
			} while (j);
			break;

		case 6:
			printf("\n\t********** Pitanje za 2000 **********");
			back = Asort(Qarray, 6);
			tocno = Qprint(back);
			Jcheck(crowdJ, fiftyJ, callJ);
			printf("\n\tDa bi ste odustali odaberite \"O\"");
			j = 1;
			do {
				printf("\n\tUnesite vas odgovor: ");
				znak = getch();
				if (znak == 'j') {
					printf("\n\tUnesite zeljeni joker: ");
					scanf("%d", &var);
					if (var == 1) {
						Jcrowd(tocno, crowdJ);
						crowdJ = -1;
						j = 1;
					}
					if (var == 2) {
						Jfifty(back, fiftyJ, tocno);
						fiftyJ = -1;
						j = 1;
					}
					if (var == 3) {
						Jcall(tocno, callJ);
						callJ = -1;
						j = 1;
					}
				}
				else if (znak == tocno)
				{
					printf("\n\n\t\tTocno!!!");
					count = 2000;
					granica = 1000;
					r1++;
					j = 0;
					printf("\n\t");
					system("pause");
					system("cls");
					break;
				}
				else if (znak == 'o') {
					printf("\n\tOdustali ste\n");
					count = 1000;
					r1 = 0;
					printf("\n\t");
					system("pause");
					system("cls");
					break;
				}
				else
				{
					printf("\n\n\tNetocno!!! Tocan odgovor je pod %c:%s", toupper(tocno), back.ans1);
					count = 0;
					granica = 1000;
					j = 0;
					r1 = 0;
					printf("\n\t");
					system("pause");
					system("cls");
					break;
				}
			} while (j);
			break;

		case 7:
			printf("\n\t********** Pitanje za 4000 **********");
			back = Asort(Qarray, 7);
			tocno = Qprint(back);
			Jcheck(crowdJ, fiftyJ, callJ);
			printf("\n\tDa bi ste odustali odaberite \"O\"");
			j = 1;
			do {
				printf("\n\tUnesite vas odgovor: ");
				znak = getch();
				if (znak == 'j') {
					printf("\n\tUnesite zeljeni joker: ");
					scanf("%d", &var);
					if (var == 1) {
						Jcrowd(tocno, crowdJ);
						crowdJ = -1;
						j = 1;
					}
					if (var == 2) {
						Jfifty(back, fiftyJ, tocno);
						fiftyJ = -1;
						j = 1;
					}
					if (var == 3) {
						Jcall(tocno, callJ);
						callJ = -1;
						j = 1;
					}
				}
				else if (znak == tocno)
				{
					printf("\n\n\t\tTocno!!!");
					count = 4000;
					r1++;
					j = 0;
					printf("\n\t");
					system("pause");
					system("cls");
					break;
				}
				else if (znak == 'o') {
					printf("\n\tOdustali ste\n");
					count = 2000;
					r1 = 0;
					printf("\n\t");
					system("pause");
					system("cls");
					break;
				}
				else
				{
					printf("\n\n\tNetocno!!! Tocan odgovor je pod %c:%s", toupper(tocno), back.ans1);
					count = 0;
					j = 0;
					r1 = 0;
					printf("\n\t");
					system("pause");
					system("cls");
					break;
				}
			} while (j);
			break;

		case 8:
			printf("\n\t********** Pitanje za 8000 **********");
			back = Asort(Qarray, 8);
			tocno = Qprint(back);
			Jcheck(crowdJ, fiftyJ, callJ);
			printf("\n\tDa bi ste odustali odaberite \"O\"");
			j = 1;
			do {
				printf("\n\tUnesite vas odgovor: ");
				znak = getch();
				if (znak == 'j') {
					printf("\n\tUnesite zeljeni joker: ");
					scanf("%d", &var);
					if (var == 1) {
						Jcrowd(tocno, crowdJ);
						crowdJ = -1;
						j = 1;
					}
					if (var == 2) {
						Jfifty(back, fiftyJ, tocno);
						fiftyJ = -1;
						j = 1;
					}
					if (var == 3) {
						Jcall(tocno, callJ);
						callJ = -1;
						j = 1;
					}
				}
				else if (znak == tocno)
				{
					printf("\n\n\t\tTocno!!!");
					count = 8000;
					r1++;
					j = 0;
					printf("\n\t");
					system("pause");
					system("cls");
					break;
				}
				else if (znak == 'o') {
					printf("\n\tOdustali ste\n");
					count = 4000;
					r1 = 0;
					printf("\n\t");
					system("pause");
					system("cls");
					break;
				}
				else
				{
					printf("\n\n\tNetocno!!! Tocan odgovor je pod %c:%s", toupper(tocno), back.ans1);
					count = 0;
					j = 0;
					r1 = 0;
					printf("\n\t");
					system("pause");
					system("cls");
					break;
				}
			} while (j);
			break;

		case 9:
			printf("\n\t********** Pitanje za 16 000 **********");
			back = Asort(Qarray, 9);
			tocno = Qprint(back);
			Jcheck(crowdJ, fiftyJ, callJ);
			printf("\n\tDa bi ste odustali odaberite \"O\"");
			j = 1;
			do {
				printf("\n\tUnesite vas odgovor: ");
				znak = getch();
				if (znak == 'j') {
					printf("\n\tUnesite zeljeni joker: ");
					scanf("%d", &var);
					if (var == 1) {
						Jcrowd(tocno, crowdJ);
						crowdJ = -1;
						j = 1;
					}
					if (var == 2) {
						Jfifty(back, fiftyJ, tocno);
						fiftyJ = -1;
						j = 1;
					}
					if (var == 3) {
						Jcall(tocno, callJ);
						callJ = -1;
						j = 1;
					}
				}
				else if (znak == tocno)
				{
					printf("\n\n\t\tTocno!!!");
					count = 16000;
					r1++;
					j = 0;
					printf("\n\t");
					system("pause");
					system("cls");
					break;
				}
				else if (znak == 'o') {
					printf("\n\tOdustali ste\n");
					count = 8000;
					r1 = 0;
					printf("\n\t");
					system("pause");
					system("cls");
					break;
				}
				else
				{
					printf("\n\n\tNetocno!!! Tocan odgovor je pod %c:%s", toupper(tocno), back.ans1);
					count = 0;
					j = 0;
					r1 = 0;
					printf("\n\t");
					system("pause");
					system("cls");
					break;
				}
			} while (j);
			break;

		case 10:
			printf("\n\t********** Pitanje za 32 000 **********");
			back = Asort(Qarray, 10);
			tocno = Qprint(back);
			Jcheck(crowdJ, fiftyJ, callJ);
			printf("\n\tDa bi ste odustali odaberite \"O\"");
			j = 1;
			do {
				printf("\n\tUnesite vas odgovor: ");
				znak = getch();
				if (znak == 'j') {
					printf("\n\tUnesite zeljeni joker: ");
					scanf("%d", &var);
					if (var == 1) {
						Jcrowd(tocno, crowdJ);
						crowdJ = -1;
						j = 1;
					}
					if (var == 2) {
						Jfifty(back, fiftyJ, tocno);
						fiftyJ = -1;
						j = 1;
					}
					if (var == 3) {
						Jcall(tocno, callJ);
						callJ = -1;
						j = 1;
					}
				}
				else if (znak == tocno)
				{
					printf("\n\n\t\tTocno!!!");
					count = 32000;
					r1++;
					j = 0;
					printf("\n\t");
					system("pause");
					system("cls");
					break;
				}
				else if (znak == 'o') {
					printf("\n\tOdustali ste\n");
					count = 16000;
					r1 = 0;
					printf("\n\t");
					system("pause");
					system("cls");
					break;
				}
				else
				{
					printf("\n\n\tNetocno!!! Tocan odgovor je pod %c:%s", toupper(tocno), back.ans1);
					count = 0;
					j = 0;
					r1 = 0;
					printf("\n\t");
					system("pause");
					system("cls");
					break;
				}
			} while (j);
			break;

		case 11:
			printf("\n\t********** Pitanje za 64 000 **********");
			back = Asort(Qarray, 11);
			tocno = Qprint(back);
			Jcheck(crowdJ, fiftyJ, callJ);
			printf("\n\tDa bi ste odustali odaberite \"O\"");
			j = 1;
			do {
				printf("\n\tUnesite vas odgovor: ");
				znak = getch();
				if (znak == 'j') {
					printf("\n\tUnesite zeljeni joker: ");
					scanf("%d", &var);
					if (var == 1) {
						Jcrowd(tocno, crowdJ);
						crowdJ = -1;
						j = 1;
					}
					if (var == 2) {
						Jfifty(back, fiftyJ, tocno);
						fiftyJ = -1;
						j = 1;
					}
					if (var == 3) {
						Jcall(tocno, callJ);
						callJ = -1;
						j = 1;
					}
				}
				else if (znak == tocno)
				{
					printf("\n\n\t\tTocno!!!");
					count = 64000;
					granica = 32000;
					r1++;
					j = 0;
					printf("\n\t");
					system("pause");
					system("cls");
					break;
				}
				else if (znak == 'o') {
					printf("\n\tOdustali ste\n");
					count = 32000;
					r1 = 0;
					printf("\n\t");
					system("pause");
					system("cls");
					break;
				}
				else
				{
					printf("\n\n\tNetocno!!! Tocan odgovor je pod %c:%s", toupper(tocno), back.ans1);
					count = 0;
					granica = 32000;
					j = 0;
					r1 = 0;
					printf("\n\t");
					system("pause");
					system("cls");
					break;
				}
			} while (j);
			break;

		case 12:
			printf("\n\t********** Pitanje za 125 000 **********");
			back = Asort(Qarray, 12);
			tocno = Qprint(back);
			Jcheck(crowdJ, fiftyJ, callJ);
			printf("\n\tDa bi ste odustali odaberite \"O\"");
			j = 1;
			do {
				printf("\n\tUnesite vas odgovor: ");
				znak = getch();
				if (znak == 'j') {
					printf("\n\tUnesite zeljeni joker: ");
					scanf("%d", &var);
					if (var == 1) {
						Jcrowd(tocno, crowdJ);
						crowdJ = -1;
						j = 1;
					}
					if (var == 2) {
						Jfifty(back, fiftyJ, tocno);
						fiftyJ = -1;
						j = 1;
					}
					if (var == 3) {
						Jcall(tocno, callJ);
						callJ = -1;
						j = 1;
					}
				}
				else if (znak == tocno)
				{
					printf("\n\n\t\tTocno!!!");
					count = 125000;
					r1++;
					j = 0;
					printf("\n\t");
					system("pause");
					system("cls");
					break;
				}
				else if (znak == 'o') {
					printf("\n\tOdustali ste\n");
					count = 64000;
					r1 = 0;
					printf("\n\t");
					system("pause");
					system("cls");
					break;
				}
				else
				{
					printf("\n\n\tNetocno!!! Tocan odgovor je pod %c:%s", toupper(tocno), back.ans1);
					count = 0;
					j = 0;
					r1 = 0;
					printf("\n\t");
					system("pause");
					system("cls");
					break;
				}
			} while (j);
			break;

		case 13:
			printf("\n\t********** Pitanje za 250 000 **********");
			back = Asort(Qarray, 13);
			tocno = Qprint(back);
			Jcheck(crowdJ, fiftyJ, callJ);
			printf("\n\tDa bi ste odustali odaberite \"O\"");
			j = 1;
			do {
				printf("\n\tUnesite vas odgovor: ");
				znak = getch();
				if (znak == 'j') {
					printf("\n\tUnesite zeljeni joker: ");
					scanf("%d", &var);
					if (var == 1) {
						Jcrowd(tocno, crowdJ);
						crowdJ = -1;
						j = 1;
					}
					if (var == 2) {
						Jfifty(back, fiftyJ, tocno);
						fiftyJ = -1;
						j = 1;
					}
					if (var == 3) {
						Jcall(tocno, callJ);
						callJ = -1;
						j = 1;
					}
				}
				else if (znak == tocno)
				{
					printf("\n\n\t\tTocno!!!");
					count = 250000;
					r1++;
					j = 0;
					printf("\n\t");
					system("pause");
					system("cls");
					break;
				}
				else if (znak == 'o') {
					printf("\n\tOdustali ste\n");
					count = 125000;
					r1 = 0;
					printf("\n\t");
					system("pause");
					system("cls");
					break;
				}
				else
				{
					printf("\n\n\tNetocno!!! Tocan odgovor je pod %c:%s", toupper(tocno), back.ans1);
					count = 0;
					j = 0;
					r1 = 0;
					printf("\n\t");
					system("pause");
					system("cls");
					break;
				}
			} while (j);
			break;

		case 14:
			printf("\n\t********** Pitanje za 500 000 **********");
			back = Asort(Qarray, 14);
			tocno = Qprint(back);
			Jcheck(crowdJ, fiftyJ, callJ);
			printf("\n\tDa bi ste odustali odaberite \"O\"");
			j = 1;
			do {
				printf("\n\tUnesite vas odgovor: ");
				znak = getch();
				if (znak == 'j') {
					printf("\n\tUnesite zeljeni joker: ");
					scanf("%d", &var);
					if (var == 1) {
						Jcrowd(tocno, crowdJ);
						crowdJ = -1;
						j = 1;
					}
					if (var == 2) {
						Jfifty(back, fiftyJ, tocno);
						fiftyJ = -1;
						j = 1;
					}
					if (var == 3) {
						Jcall(tocno, callJ);
						callJ = -1;
						j = 1;
					}
				}
				else if (znak == tocno)
				{
					printf("\n\n\t\tTocno!!!");
					count = 500000;
					r1++;
					j = 0;
					printf("\n\t");
					system("pause");
					system("cls");
					break;
				}
				else if (znak == 'o') {
					printf("\n\tOdustali ste\n");
					count = 250000;
					r1 = 0;
					printf("\n\t");
					system("pause");
					system("cls");
					break;
				}
				else
				{
					printf("\n\n\tNetocno!!! Tocan odgovor je pod %c:%s", toupper(tocno), back.ans1);
					count = 0;
					j = 0;
					r1 = 0;
					printf("\n\t");
					system("pause");
					system("cls");
					break;
				}
			} while (j);
			break;

		case 15:
			printf("\n\t********** Pitanje za 1 000 000 **********");
			back = Asort(Qarray, 15);
			tocno = Qprint(back);
			Jcheck(crowdJ, fiftyJ, callJ);
			printf("\n\tDa bi ste odustali odaberite \"O\"");
			j = 1;
			do {
				printf("\n\tUnesite vas odgovor: ");
				znak = getch();
				if (znak == 'j') {
					printf("\n\tUnesite zeljeni joker: ");
					scanf("%d", &var);
					if (var == 1) {
						Jcrowd(tocno, crowdJ);
						crowdJ = -1;
						j = 1;
					}
					if (var == 2) {
						Jfifty(back, fiftyJ, tocno);
						fiftyJ = -1;
						j = 1;
					}
					if (var == 3) {
						Jcall(tocno, callJ);
						callJ = -1;
						j = 1;
					}
				}
				else if (znak == tocno)
				{
					printf("\n\n\t\tTOCNO!!!\n\t\tOSVOJILI STE MILIJUN BODOVA!!!");
					count = 1000000;
					r1 = 0;
					j = 0;
					printf("\n\t");
					system("pause");
					system("cls");
					break;
				}
				else if (znak == 'o') {
					printf("\n\tOdustali ste\n");
					count = 500000;
					r1 = 0;
					printf("\n\t");
					system("pause");
					system("cls");
					break;
				}
				else
				{
					printf("\n\n\tNetocno!!! Tocan odgovor je pod %c:%s", toupper(tocno), back.ans1);
					count = 0;
					j = 0;
					r1 = 0;
					printf("\n\t");
					system("pause");
					system("cls");
					break;
				}
			} while (j);
			break;
		}
	} while (r1);

	igrac.highscore = (count >= granica ? count : granica);
	system("cls");
	printf("\n\tVase ime:%s i vas highscore: %d\n\t", igrac.ime, igrac.highscore);

	fprintf(hp, "%8d %s", igrac.highscore, igrac.ime);


	fclose(hp);
	int uvijet;
	while ((uvijet = getchar()) != '\n' && uvijet != EOF) {}
	system("pause");
	system("cls");
}

void* Qload(void) {
	FILE* pF = fopen("pitanja.bin", "rb");
	if (pF == NULL) {
		perror("Ucitavanje pitanja iz datoteke pitanja.bin");
		return NULL;
	}

	fread(&Qnum, sizeof(int), 1, pF);
	

	QUESTION* Qarray = { NULL };
	Qarray = (QUESTION*)calloc(Qnum, sizeof(QUESTION));
	if (Qarray == NULL) {
		perror("Zauzimanje memorije za pitanja");
		return NULL;
	}

	fread(Qarray, sizeof(QUESTION), Qnum, pF);
	fclose(pF);
	return Qarray;
}

QUESTION Asort(QUESTION* Qarray, int level) {

	QUESTION* sortirano = NULL;
	int i;
	counter = 0;
	for (i = 0; i < Qnum; i++) {
		if ((Qarray + i)->level == level) {
			counter++;
		}
	}
	sortirano = (QUESTION*)calloc(counter, sizeof(QUESTION));
	if (sortirano == NULL) {
		perror("Zauzimanje memorije za sortirana pitanja");
		exit(EXIT_FAILURE);
	}

	int j = 0;
	for (i = 0; i < Qnum; i++) {
		if ((Qarray + i)->level == level) {
			sortirano[j] = Qarray[i];
			j++;
		}
	}

	int p[3], y;
	QUESTION odabrano;

	srand((unsigned)time(NULL));

	for (i = 0; i < 3; i++) {
		p[i] = (float)rand() / RAND_MAX * counter;
		
	}
	y = p[2];
	odabrano = sortirano[y];
	

	return odabrano;
}

char Qprint(QUESTION odabrano) {


	int x;
	printf("\n\n\t%s", odabrano.pitanje);
	x = (float)rand() / RAND_MAX * 1000;
	

	char tocni;

	if (0 <= x && x < 250) {
		printf("\n\tA:%s\tB:%s\tC:%s\tD:%s", odabrano.ans2, odabrano.ans3, odabrano.ans1, odabrano.ans4);
		tocni = 'c';
	}
	if (250 <= x && x < 500) {
		printf("\n\tA:%s\tB:%s\tC:%s\tD:%s", odabrano.ans4, odabrano.ans1, odabrano.ans2, odabrano.ans3);
		tocni = 'b';
	}
	if (500 <= x && x < 750) {
		printf("\n\tA:%s\tB:%s\tC:%s\tD:%s", odabrano.ans3, odabrano.ans2, odabrano.ans4, odabrano.ans1);
		tocni = 'd';
	}
	if (750 <= x && x <= 1000) {
		printf("\n\tA:%s\tB:%s\tC:%s\tD:%s", odabrano.ans1, odabrano.ans4, odabrano.ans3, odabrano.ans2);
		tocni = 'a';
	}
	return tocni;
}


void helpdesk(void) {


	system("cls");
	printf("\n *********************************** Dobrodosli u Paltana Pub kviz **********************************");
	printf("\n **********************************************************************************************************************");
	printf("\n\n\t>>Pravila igre <<");

	printf("\n\n\tPaltana Pub kviz drustveno je natjecateljska manifestaciju u kojem natjecatelj\
\n\todgovara na razna pitanja iz svakodnevnog zivota. Kviz se sastoji od 15 pitanja za koja \
\n\tima ponudjeno 4 odgovora. Natjecatelj mora nastojati odgovoriti tocno, dok mu na\
\n\traspolaganju kao pomoć služe i vrlo dobro poznata 3 Jokera. Cilj je odgovoriti tocno\
\n\tna svih 15 pitanja te osvojiti najvecu nagradu.\n");

	printf("\n\tU slucaju da natjecatelj na pitanje odgovori tocno, ima pravo odgvo odgovorati na\
\n\tsljedece pitanje dok se uz svako tocno odgovoreno pitanje nagradni fond povecava.");

	printf("\n\tTijekom kviza postoje dva praga: prvi se nalazi na 5. pitanju, pri kojem tocan odgovor\
\n\tnatjecatelju donosi 1000 bodova; dok se drugi nalazi na 10, pitanju pri kojem se uz\
\n\ttocan odgovor natljecatelju pripisuje 32000 bodova. Ukoliko natjecatelj ponudi\
\n\tnetocan odgvor, eliminiran je te ispada iz daljnjeg natjecanja.");

	printf("\n\n\t>> Opcija \"ODUSTANI\" <<");
	printf("\n\n\tNNatjecatelj ukoliko odluci moze u bilo kojem trenutku prekunuti s igromm.\
\n\tpritiskom 'O' na tipkovnici, natjecatelj zavrsava svoju igru te mu se pripisuju bodovi steceni\
\n\tdo zadnjeg tocnog pitanja.");

	printf("\n\n\t>> Joker \"POLA-POLA\" (50:50) <<");
	printf("\n\n\tPritiskom na tipku \"J\" natjecatelj moze izabrati Joker 'pola - pola'. U tom slucaju\
\n\tsa ekrana se micu dva ponudjena odgovora te ostaju samo dva; jedan tocan te jedan netocan sto znatno olaksava\
\n\tdaljnji nastavak odgovaranja.");

	printf("\n\n\t>> Joker \"PITAJ PUBLIKU\" <<");
	printf("\n\n\tPritiskom na tipku \"J\" natjecatelj moze izabrati Joker 'Pitaj publiku'.Publika moze\
\n\tglasati za odgovor koji oni misle da je tocan. Postotak odabranih odgovora prikazat ce se \
\n\tnatjecatelju sto mu moze pomoci pri odabiru tocnog odgovora.");

	printf("\n\n\t>> Joker \"callJ\" <<");
	printf("\n\n\tPritiskom na tipku \"J\" natjecatelj moze izabrati Joker 'callJ'.Natjecatelj ima mogucnost\
\n\tnazvati nekoga po svojoj zelji, procitati mu pitanje te pitati za pomoc pri odgovoru.");

	printf("\n\n\n\tPritisnite enter za povratak na pocetni zaslon!\n");
	system("pause");
	system("cls");
}

char quit(void) {

	printf("Zelite li uistinu zatvoriti program?\n");
	printf("Upisite 'da' ako zelite zatvoriti program\n");
	char potvrda[3] = { '\0' };
	scanf("%2s", potvrda);
	if (!strcmp("da", potvrda)) {
		return NULL;
	}

	int c;
	while ((c = getchar()) != '\n' && c != EOF) {}
	system("pause");
	system("cls");
	return '1';
}

void admnistrator(void) {

	system("cls");
	
	char username[15];
	char password[12];


	printf("Unesite korisnicko ime: ");
	scanf("%s", &username);

	printf("Unesite zaporku: ");
	scanf("%s", &password);

	if (strcmp(username, "admin") == 0) {
		if (strcmp(password, "admin") == 0) {
			printf("Uspjesno ste se ulogirali");
			system("cls");
			Qadd();
		}
		else {
			printf("\nPogeresna lozinka");
		}
	}
	else {
		printf("\nNepostojano korisnicko ime");
	}

	printf("\nPritisnite enter za povratak na pocetni zaslon!\n");
	system("pause");
	system("cls");

}

void Dmake(void) {

	FILE* fp = NULL;
	fp = fopen("pitanja.bin", "rb");
	if (fp == NULL) {

		fp = fopen("pitanja.bin", "wb");
		if (fp == NULL) {
			perror("Kreiranje datoteke pitanja.bin");
			exit(EXIT_FAILURE);
		}
		fwrite(&Qnum, sizeof(int), 1, fp);
		fclose(fp);
	}
	else {
		fwrite(&Qnum, sizeof(int), 1, fp);
		fclose(fp);
	}

}

void Qadd(void) {

	Dmake();
	FILE* pF = fopen("pitanja.bin", "rb+");
	if (pF == NULL) {
		perror("Dodavanje studenta u datoteke pitanja.bin");
		exit(EXIT_FAILURE);
	}
	fread(&Qnum, sizeof(int), 1, pF);
	printf("Ukupan broj pitanja: %d\n", Qnum);

	QUESTION temp = { 0 };
	int t, c;

	printf("\nUnesite tezinu pitanja od 1 do 15: ");
	do {
		scanf("%d", &t);
		if (1 > t || t > 15) {
			printf("\nUnjeli ste nedozvoljen broj! Uneiste neki od brojeva u trazenom intervalu: ");
			while ((c = getchar()) != '\n' && c != EOF) {}
		}
	} while (!(1 <= t && t <= 15));
	temp.level = t;
	getchar();

	printf("Unesite pitanje!\n");
	fgets(temp.pitanje, 199, stdin);

	printf("Unesite odgovor!\n");
	fgets(temp.ans1, 49, stdin);

	printf("Unesite odgovor!\n");
	fgets(temp.ans2, 49, stdin);

	printf("Unesite odgovor!\n");
	fgets(temp.ans3, 49, stdin);

	printf("Unesite odgovor!\n");
	fgets(temp.ans4, 49, stdin);

	fseek(pF, sizeof(QUESTION) * Qnum, SEEK_CUR);
	fwrite(&temp, sizeof(QUESTION), 1, pF);
	rewind(pF);
	Qnum++;
	fwrite(&Qnum, sizeof(int), 1, pF);
	fclose(pF);
	printf("\n\t");
	system("pause");
	system("cls");

}


void highscore(void) {


	FILE* hp = NULL;
	hp = fopen("highscore.bin", "rb");
	if (hp == NULL) {
		printf("\nDatoteka se ne moze otvoriti.\n");
		perror("Otvaranje");
	}


	HIGHSCORE* hs;
	int highscore;
	char ime[20];
	int i = 0, brojac = 0;


	while ((fscanf(hp, "%7d %s", &highscore, ime)) != EOF) {
		brojac++;
	}

	hs = (HIGHSCORE*)calloc(brojac, sizeof(HIGHSCORE));

	rewind(hp);

	while ((fscanf(hp, "%7d %s", &(hs + i)->highscore, (hs + i)->ime)) != EOF) {
		i++;
	}

	sort(hs, brojac);

	fclose(hp);

	
	printf("\n\t");
	system("pause");
	system("cls");
}



void sort(HIGHSCORE* hs, int n) {


	HIGHSCORE temp;

	int min = -1, i, j;
	for (i = 0; i < n - 1; i++) {
		min = i;
		for (j = i + 1; j < n; j++) {
			if ((hs + j)->highscore > (hs + min)->highscore) {
				min = j;
			}
		}

		temp = hs[min];
		hs[min] = hs[i];
		hs[i] = temp;
	}

	j = 1;
	
	if (n >= 10) {
		for (i = 0; i < 10; i++) {
			printf("\n\t%d. Ime: %s\t\tHighscore: %d", j, (hs + i)->ime, (hs + i)->highscore);
			j++;
		}
	}
	else if (n < 10) {
		for (i = n - 1; i >= 0; i--) {
			printf("\n\t%d. Ime: %s\t\tHighscore: %d", j, (hs + i)->ime, (hs + i)->highscore);
			j++;
		}
	}
}

void Jcheck(int crowdJ, int fiftyJ, int callJ) {
	printf("\n\n\n\tDa bi ste odabrali jokera pritisnite \"J\"");
	printf("\n\tOd jokera su dostupni: ");
	if (crowdJ > 0) {
		printf("\n\tPITAJ PUBLIKU(1) : ");
	}
	if (fiftyJ > 0) {
		printf("POLA:POLA(2) :  ");
	}
	if (callJ > 0) {
		printf("JOKER POZIV(3)");
	}
	else {
		printf("\n\tNemate dostupnih jokera\n");
	}
}

void Jcrowd(char odg, int provjera) {
	srand((unsigned)time(NULL));
	int g[4], i, max = 0;

	for (i = 0; i < 4; i++) {
		g[i] = (float)rand() / RAND_MAX * 100;
		if (max < g[i]) {
			max = g[i];
		}
	}

	if (provjera > 0) {
		if (odg == 'a') {
			printf("\n\tNajveci postotak je dobio odgovor A: %d%%", max);
		}
		if (odg == 'b') {
			printf("\n\tNajveci postotak je dobio odgovor B: %d%%", max);
		}
		if (odg == 'c') {
			printf("\n\tNajveci postotak je dobio odgovor C: %d%%", max);
		}
		if (odg == 'd') {
			printf("\n\tNajveci postotak je dobio odgovor D: %d%%", max);
		}
	}
	else if (provjera < 0) {
		printf("\n\tVec ste iskoristili taj joker!\n");
		printf("\n\tIli ponovno odaberite joker opciju ili unesite svoj konacan odgovor.");
	}
}

void Jfifty(QUESTION odabrano, int provjera, char odg) {

	int x;
	x = (float)rand() / RAND_MAX * 1000;

	if (provjera > 0) {
		if (odg == 'a') {
			if (0 <= x && x < 335) {
				printf("\n\tA:%s\tB:%s", odabrano.ans1, odabrano.ans4);
			}
			if (335 <= x && x < 665) {
				printf("\n\tA:%s\tC:%s", odabrano.ans1, odabrano.ans3);
			}
			if (665 <= x && x < 1000) {
				printf("\n\tA:%s\tD:%s", odabrano.ans1, odabrano.ans2);
			}
		}

		if (odg == 'b') {
			if (0 <= x && x < 335) {
				printf("\n\tA:%s\tB:%s", odabrano.ans4, odabrano.ans1);
			}
			if (335 <= x && x < 665) {
				printf("\n\tB:%s\tC:%s", odabrano.ans1, odabrano.ans2);
			}
			if (665 <= x && x < 1000) {
				printf("\n\tB:%s\tD:%s", odabrano.ans1, odabrano.ans3);
			}
		}

		if (odg == 'c') {
			if (0 <= x && x < 335) {
				printf("\n\tA:%s\tC:%s", odabrano.ans2, odabrano.ans1);
			}
			if (335 <= x && x < 665) {
				printf("\n\tB:%s\tC:%s", odabrano.ans3, odabrano.ans1);
			}
			if (665 <= x && x < 1000) {
				printf("\n\tC:%s\tD:%s", odabrano.ans1, odabrano.ans4);
			}
		}

		if (odg == 'd') {
			if (0 <= x && x < 335) {
				printf("\n\tA:%s\tD:%s", odabrano.ans3, odabrano.ans1);
			}
			if (335 <= x && x < 665) {
				printf("\n\tB:%s\tD:%s", odabrano.ans2, odabrano.ans1);
			}
			if (665 <= x && x < 1000) {
				printf("\n\tC:%s\tD:%s", odabrano.ans4, odabrano.ans1);
			}
		}

		printf("\n\tUnesite svoj konacan odgovor: ");
	}
	else if (provjera < 0) {
		printf("\n\tVec ste iskoristili taj joker!\n");
		printf("\n\tIli ponovno odaberite joker opciju ili unesite svoj konacan odgovor.");
	}
}

void Jcall(char odg, int provjera) {
	if (provjera > 0) {
		printf("\n\tPoziv kaze %c tocan odgovor.", toupper(odg));
	}
	else if (provjera < 0) {
		printf("\n\tVec ste iskoristili taj joker!\n");
		printf("\n\tIli ponovno odaberite joker opciju ili unesite svoj konacan odgovor.");
	}
}
void Hsearch(void) {

	FILE* hp = NULL;
	hp = fopen("highscore.bin", "rb");
	if (hp == NULL) {
		printf("\nDatoteka se ne moze otvoriti.\n");
		perror("Otvaranje");
	}

	HIGHSCORE* hs;
	int highscore;
	char ime[20];
	int i = 0, brojac = 0;


	while ((fscanf(hp, "%d %s", &highscore, ime)) != EOF) {
		brojac++;
	}

	hs = (HIGHSCORE*)calloc(brojac, sizeof(HIGHSCORE));

	rewind(hp);

	while ((fscanf(hp, "%d %s", &(hs + i)->highscore, (hs + i)->ime)) != EOF) {
		i++;
	}


	char s[20];
	char* string = &s;
	int f = 0;


	printf("\n\tUnesite ime trazenog igraca: ");
	fgets(string, 19, stdin);
	Scheck(string);

	for (i = 0; i < brojac; i++) {
		

		if (strcmp((hs + i)->ime, string) == 0) {
			printf("\n\tIgrac je pronaden!\n");
			printf("\n\tIme:%s\t\tHighscore:%d", (hs + i)->ime, (hs + i)->highscore);
			f = 1;
			
		}

		else if (i == (brojac - 1) && f < 1) {
			printf("\n\tTakav igrac ne postoji");
			

		}
	}
	
	fclose(hp);
	printf("\n\t");
	system("pause");
	system("cls");

}

void Scheck(char* polje) {
	int n = strlen(polje);
	if (polje[n - 1] == '\n') {
		polje[n - 1] = '\0';
	}
}

void Qlookout(void) {

	Qarray = (QUESTION*)Qload();


	int level, i;
	printf("\n\tUneiste tezinu pitanja koja zelite pretrazit: ");
	do {
		scanf("%d", &level);
		if (level < 0 || level > 15) {
			printf("\n\tUnjeli ste pogresnu tezinu pitanja! Unesite neku od dozvoljenih vrijednost: ");
		}
	} while (!(0 < level && level < 16));

	QUESTION* sortirano = NULL;

	counter = 0;
	for (i = 0; i < Qnum; i++) {
		if ((Qarray + i)->level == level) {
			counter++;
		}
	}
	printf("\nBroj pitanja za ovu razinu %d", counter);
	sortirano = (QUESTION*)calloc(counter, sizeof(QUESTION));
	if (sortirano == NULL) {
		perror("Zauzimanje memorije za sortirana pitanja");
		exit(EXIT_FAILURE);
	}

	int j = 0;
	for (i = 0; i < Qnum; i++) {
		if ((Qarray + i)->level == level) {
			sortirano[j] = Qarray[i];
			printf("\n\t%s", (sortirano + j)->pitanje);
			printf("\n\tA:%s\tB:%s\tC:%s\tD:%s", (sortirano + j)->ans1, (sortirano + j)->ans2, (sortirano + j)->ans3, (sortirano + j)->ans4);
			j++;
		}
	}
	system("pause");
	system("cls");
	int uvijet;
	while ((uvijet = getchar()) != '\n' && uvijet != EOF) {}
}

