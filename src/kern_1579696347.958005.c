#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(270, "random");
	int **B = create_two_dim_int(330, 40, "random");

	for (int c = 0; c < 37; c++)
	  for (int b = 0; b < 327; b++)
	    for (int a = 0; a < 327; a++)
	    {
	      
	      B[a][b]=B[a+3][b+2]-A[a];
	      
	      B[a][b]=33;
	    }

    return 0;
}