#include <stdio.h>

struct employee {
  char first_name[20];
  char last_name[20];
  int id;
  int ssn;
  char title[20];
};

struct two_empoyees {
  struct employee first;
  struct employee second;
} engineering_dept;

int main(void) {
  for (int i = 1; i < 3; ++i) {
    struct employee *emp = &engineering_dept.first;
    if (i == 2) {
      emp = &engineering_dept.second;
    }
    printf("Employee #%d:\n", i);
    printf("Enter the employee's first name: ");
    scanf("%s", &emp->first_name);
    printf("Enter the employee's last name: ");
    scanf("%s", &emp->last_name);
    printf("Enter the employee's ID number: ");
    scanf("%d", &emp->id);
    printf("Enter the last four digits of the employee's SSN: ");
    scanf("%d", &emp->ssn);
    printf("Enter the employee's job title (do not include the word 'Engineer'): ");
    scanf("%s", &emp->title);
  }

  printf("Employee information for %s %s\n", engineering_dept.first.first_name, engineering_dept.first.last_name);
  printf("ID: %d\n", engineering_dept.first.id);
  printf("SSN: %d\n", engineering_dept.first.ssn);
  printf("Title: %s Engineer\n", engineering_dept.first.title);
  putchar('\n');
  printf("Employee information for %s %s\n", engineering_dept.second.first_name, engineering_dept.second.last_name);
  printf("ID: %d\n", engineering_dept.second.id);
  printf("SSN: %d\n", engineering_dept.second.ssn);
  printf("Title: %s Engineer\n", engineering_dept.second.title);
  return 0;
}
