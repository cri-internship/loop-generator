#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(390, "zeros");
	int **A = create_two_dim_int(280, 1000, "zeros");

	for (int c = 0; c < 388; c++)
	  for (int b = 0; b < 388; b++)
	    for (int a = 0; a < 388; a++)
	    {
	      
	      B[a]=B[a+2]+39;
	    }

    return 0;
}