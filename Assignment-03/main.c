#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char ch;
    int size = 0;
    int capacity = 8;
    char* first_name = malloc( sizeof( char ) * capacity );
    printf("Enter your first name: ");
    while (1) {
	scanf("%c", &ch);
	if (ch == '\n') {
	    break;
	}
	first_name[size] = ch;
	size++;
	if (size == capacity) {
	    capacity *= 2;
	    first_name = realloc(first_name, sizeof( char ) * capacity );
	    if (first_name == NULL) {
		printf("Realloc failed!");
		return 1;
	    }
	}
    }
    size = 0;
    capacity = 8;
    char* last_name = malloc( sizeof( char ) * capacity );
    printf("Enter your last name: ");
    while (1) {
	scanf("%c", &ch);
	if (ch == '\n') {
	    break;
	}
	last_name[size] = ch;
	size++;
	if (size == capacity) {
	    capacity *= 2;
	    last_name = realloc(first_name, sizeof( char ) * capacity );
	    if (last_name == NULL) {
		printf("Realloc failed!");
		return 1;
	    }
	}
    }
    printf("Hello %s %s!\n", first_name, last_name);
    free(first_name);
    free(last_name);
    return 0;
}
