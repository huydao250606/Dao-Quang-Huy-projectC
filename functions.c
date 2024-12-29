#include<stdio.h>
#include"functions.h"

Student studentList[100];
int studentCount = 0;
void displayMenu(){
    printf("\n============================\n");
    printf(" Quan Ly Sinh Vien \n");
    printf("============================\n");
    printf("1. Hien thi danh sach sinh vien\n");
    printf("2. Them sinh vien moi\n");
    printf("3. Thoat\n");
    printf("Nhap lua chon: ");
}
void displayStudents(){
    if (studentCount == 0) {
        printf("\nChua co sinh vien nao trong danh sach.\n");
        return;
    }
    printf("\n**** All Students ****\n");
    printf("==========================================================================================================\n");
    printf("| %-4s | %-20s | %-30s | %-15s | %-11s |\n", "ID", "Name", "Email", "Phone", "ClassroomID");
    printf("==========================================================================================================\n");
    int i;
    for (i = 0; i < studentCount; i++) {
        printf("| %-4d | %-20s | %-30s | %-15s | %-11d |\n",
               studentList[i].id, studentList[i].name, studentList[i].email,
               studentList[i].phone, studentList[i].classroomId);
    }
    printf("==========================================================================================================\n");
}
void addStudent(){
    if (studentCount >= 100){
        printf("\nDanh sach da day, khong them duoc sinh vien moi.\n");
        return;
    }
    Student newStudent;
    newStudent.id = studentCount + 1;

    printf("\nNhap Classroom ID: ");
    scanf("%d", &newStudent.classroomId);

    printf("Nhap ten sinh vien: ");
    scanf(" %[^\n]s", newStudent.name);

    printf("Nhap ngay sinh (dd/mm/yyyy): ");
    scanf(" %[^\n]s", newStudent.dateOfBirth);

    printf("Nhap gioi tinh: ");
    scanf(" %[^\n]s", newStudent.gender);

    printf("Nhap email: ");
    scanf(" %[^\n]s", newStudent.email);

    printf("Nhap so dien thoai: ");
    scanf(" %[^\n]s", newStudent.phone);

    printf("Nhap mat khau: ");
    scanf(" %[^\n]s", newStudent.password);

    studentList[studentCount] = newStudent;
    studentCount++;

    printf("\nThem sinh vien thanh cong!\n");
}

