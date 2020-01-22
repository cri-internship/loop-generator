#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(380, "zeros");
	int **C = create_two_dim_int(350, 500, "zeros");
	int *D = create_one_dim_int(810, "zeros");
	int *A = create_one_dim_int(490, "zeros");
	int *E = create_one_dim_int(360, "zeros");

	for (int c = 4; c < 490; c++)
	  for (int b = 4; b < 490; b++)
	    for (int a = 4; a < 490; a++)
	    {
	      
	      A[a]=D[a];
	      A[a-4]=C[a][b];
	    }

    return 0;
}