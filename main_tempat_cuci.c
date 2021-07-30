#include "cuci_mobil.h"
int main() {
	int choice;

	queueMobil Q[3];
	data_tmptcuci tmptcuci[3];
	
	tmptcuci[0].no_tmptcuci = "Tempat 1";
	tmptcuci[0].p_tmptcuci = NULL;
	createEmpty(&Q[0]);
	tmptcuci[1].no_tmptcuci = "Tempat 2";
	tmptcuci[1].p_tmptcuci = NULL;
	createEmpty(&Q[1]);
	tmptcuci[2].no_tmptcuci = "Tempat 3";
	tmptcuci[2].p_tmptcuci = NULL;
	createEmpty(&Q[2]);
		
	do{
		system("cls");
		printf("\n\n\n\n");
		int i = 0;
		printf("|=====================================|\n");
		printf("|             Antrian cuci            |\n");
		printf("|=====================================|\n");
		while(i < 3){
			printf("Tempat ke %d : ", i+1);
			printqueueMobil(Q[i]);
			printf("\n");
			i++;
		}
		printf("\n\n");
		mainmenu(&choice);
		switch(choice){
			case 1:{
				addAntrian(Q, tmptcuci);
				break;
			}
			case 2:{
				checkout(&Q);
				break;
			}
			case 3:{
				showrekap();
				break;
			}
			case 4:{
				help();
				break;
			}
			case 5:{
				exit (0);
			}
			default:{
				printf("\nHanya ada 5 opsi\n");
				break;
			}
		}
		getch();
	}while(choice !=5);	
}//Nisrina dan Putri
