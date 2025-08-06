#include <stdio.h>
#include <cstdlib>
#include "hellojovita_srl.h"
#include "hellojovita_prl.h"

int fn_mnudrvprg_010_parallel_construct() {
	int choice;
	while (1) {
		printf("\n\n------------ Menu Driven Program ------------");
		printf("\n\n1. Hello Jovita serial program \n");
		printf("2. Hello Jovita parallel program \n");
		printf("3. Exit \n");
		printf("Enter Your Choice\n");
		scanf_s("%d", &choice);

		switch (choice) {

		case 1:printf("\nThis is the output of Hello Jovita serial program \n");
			fn_hellojovita_srl();
			break;

		case 2:printf("\nThis is the output of Hello Jovita parallel program \n");
			fn_hellojovita_prl();
			break;

		case 3: printf("\nYou opted Exit program \n");
			exit(0);

		default:printf("\nOpted wrong choice\n");
			break;

		}//end of switch

	}// end of while

	return 0;
}