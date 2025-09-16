#include <stdio.h>
#include <stdlib.h>

int main( void ) {
  char *ptr = malloc( 10 * sizeof( char ) );
  if ( ptr == NULL ) {
    fprintf( stderr, "Failed to allocate memory!\n" );
    return 1;
  }

  printf("Memory was successfully allocated.\n");

  free(ptr);
  return 0;
}
