#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *D = create_one_dim_int(280, "zeros");
	int *C = create_one_dim_int(450, "zeros");
	int **A = create_two_dim_int(820, 750, "zeros");
	int *B = create_one_dim_int(950, "zeros");

	for (int c = 4; c < 950; c++)
	  for (int b = 4; b < 950; b++)
	    for (int a = 4; a < 950; a++)
	    {
	      
	      B[a]=B[a-4]-3;
	    }

    return 0;
}