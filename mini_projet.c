#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <errno.h>
#include <unistd.h>
#include <dirent.h>
#include <string.h>
#include <time.h>



int main(){
	char user[500];
	char user1[500];
	char user2[500];
	char user3[500];
	char user4[500];
	char user5[500];
	printf("Entrez votre identifiant: ");
	scanf("%s", user);
	char adder[10] = "1";
	//srand(time(NULL));
	//int nombre = rand()%50+1;
	int nombre = 17;
	printf("%i\n", nombre);
	//FILE *fichier = fopen(user, "r+");
	DIR *dossier = opendir(user);
	if (dossier == NULL) {
		user1 = user;
		printf("Bienvenu %s\n", user);
		mkdir(user, 0755);
		FILE *int0_9 = fopen(strcat(user,"/0_9.txt"), "w+");//fclose(int0_9);
		FILE *int10_19 = fopen(strcat(user1,"/10_19.txt"), "w+");//fclose(int10_19);
		FILE *int20_29 = fopen(strcat(user2,"/20_29.txt"), "w+");//fclose(int20_29);
		FILE *int30_39 = fopen(strcat(user3,"/30_39.txt"), "w+");//fclose(int30_39);
		FILE *int40_50 = fopen(strcat(user4,"/40_50.txt"), "w+");//fclose(int40_50);
		FILE *partie_total = fopen(strcat(user5,"partie_total.txt"), "w+");//fclose(partie_total);
		printf("helo\n");
		if (nombre >= 0 && nombre <= 9){
			fputs(adder, int0_9);
			}
		else if (nombre >= 10 && nombre <= 19){
			fputs(adder, int10_19);
			}
		else if (nombre >= 20 && nombre <= 29){
			fputs(adder, int20_29);
			}
		else if (nombre >= 30 && nombre <= 39){
			fputs(adder, int30_39);
			}
		else if (nombre >= 40 && nombre <= 50){
			fputs(adder, int40_50);
			}
		fputs(adder, partie_total);
		}
	else{ 
		printf("Le nom d'utlisateur est déjà utilisé\n");
		}
}
