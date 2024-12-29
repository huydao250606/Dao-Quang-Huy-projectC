#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int choice;
    do {
        displayMenu();
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                displayStudents();
                break;
            case 2:
                addStudent();
                break;
            case 3:
                printf("\nThoat chuong trinh.\n");
                break;
            default:
                printf("\nLua chon khong hop le, vui long nhap lai.\n");
        }
    } while (choice != 3);
    return 0;
}
