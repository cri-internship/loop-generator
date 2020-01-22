#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(280, "zeros");
	int **D = create_two_dim_int(480, 610, "zeros");
	int *C = create_one_dim_int(410, "zeros");
	int *A = create_one_dim_int(420, "zeros");

	for (int b = 0; b < 605; b++)
	  for (int a = 3; a < 280; a++)
	  {
	    
	     C[a]=C[a-3]/32;
	    
	     B[a]=32;
	     B[a-2]=21;
	    
	     D[a][b]=23;
	     D[a+5][b+5]=29;
	  }

    return 0;
}