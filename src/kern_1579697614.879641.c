#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(560, "random");
	double **B = create_two_dim_double(740, 70, "random");

	for (int c = 0; c < 560; c++)
	  for (int b = 0; b < 560; b++)
	    for (int a = 0; a < 560; a++)
	    {
	      
	      A[a]=A[a]-0.047;
	      B[a][b]=A[a]*B[a][b];
	    }

    return 0;
}