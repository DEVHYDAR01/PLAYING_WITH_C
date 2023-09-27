#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct studentlist {
  char name[50];
  int age;
  char course[50];
  struct studentlist *next;
} studentlist;

studentlist *head = NULL, *temp = NULL; // Initialize head and temp

void insert(char *name, int age, char *course) {
    studentlist *newnode = (studentlist *)malloc(sizeof(studentlist));
    strcpy(newnode->name, name);
    strcpy(newnode->course, course);
    newnode->age = age;
    newnode->next = NULL; // Initialize next to NULL

    if (head == NULL) {
        head = temp = newnode;
    } else {
        temp->next = newnode;
        temp = newnode;
    }
}

int main() {
    char name[50];
    int age;
    char course[50];
    int n;

    printf("how many do you want: ");
    scanf("%d", &n);

    for (int choice = 0; choice < n; choice++) {
        printf("enter your name : ");
        scanf("%s", name);

        printf("enter your age: ");
        scanf("%d", &age);

        printf("enter your course: ");
        scanf("%s", course);

        insert(name, age, course);
    }

    temp = head;

    while (temp != NULL) {
        printf("%s %d %s\n", temp->name, temp->age, temp->course);
        temp = temp->next;
    }

    return 0;
}
