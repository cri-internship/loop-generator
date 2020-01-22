#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(150, "random");
	int **B = create_two_dim_int(10, 730, "random");

	for (int b = 0; b < 147; b++)
	  for (int a = 0; a < 147; a++)
	  {
	    
	     A[a]=A[a+3]/3;
	    
	     A[a]=29;
	  }

    return 0;
}