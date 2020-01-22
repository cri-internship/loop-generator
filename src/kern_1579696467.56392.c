#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(180, "ones");
	int **C = create_two_dim_int(230, 750, "ones");
	int *E = create_one_dim_int(360, "ones");
	int *A = create_one_dim_int(900, "ones");
	int *D = create_one_dim_int(720, "ones");

	for (int c = 0; c < 177; c++)
	  for (int b = 0; b < 177; b++)
	    for (int a = 0; a < 177; a++)
	    {
	      
	      E[a]=16;
	      E[a+2]=3;
	      
	      B[a]=B[a]-27+C[a][b]/A[a]*D[a];
	      A[a]=B[a+3]/A[a];
	    }

    return 0;
}