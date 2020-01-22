#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(510, "random");
	int **B = create_two_dim_int(930, 590, "random");

	for (int c = 0; c < 510; c++)
	  for (int b = 0; b < 510; b++)
	    for (int a = 0; a < 510; a++)
	    {
	      
	      B[a][b]=A[a]/B[a][b];
	      A[a]=B[a][b];
	    }

    return 0;
}