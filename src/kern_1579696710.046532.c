#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(880, "random");
	int *D = create_one_dim_int(160, "random");
	int *B = create_one_dim_int(490, "random");
	int **A = create_two_dim_int(770, 700, "random");

	for (int c = 5; c < 157; c++)
	  for (int b = 5; b < 157; b++)
	    for (int a = 5; a < 157; a++)
	    {
	      
	      B[a]=B[a-2]*D[a]-A[a][b];
	      
	      D[a]=B[a]/24+A[a][b];
	      B[a]=D[a]/B[a]*C[a];
	      
	      D[a]=D[a-5]+A[a][b];
	      
	      C[a]=37;
	      C[a-3]=33;
	    }

    return 0;
}