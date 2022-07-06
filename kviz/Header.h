#ifndef HEADER_H
#define HEADER_H

typedef struct question {
	int level;
	char pitanje[200];
	char ans1[50];
	char ans2[50];
	char ans3[50];
	char ans4[50];
}QUESTION;

typedef struct highscore {
	char ime[20];
	long int highscore;
}HIGHSCORE;

char izbornik(void);
void start(void);
void* Qload(void);
QUESTION Asort(QUESTION*, int);
char Qprint(QUESTION);
void helpdesk(void);
char quit(void);
void admnistrator(void);
void Dmake(void);
void Qadd(void);
void highscore(void);
void sort(HIGHSCORE*, int);
void Jcheck(int, int, int);
void Jcrowd(char, int);
void Jfifty(QUESTION, int, char);
void Jcall(char, int);
void Hsearch(void);
void Scheck(char*);
void Qlookout(void);





#endif 



