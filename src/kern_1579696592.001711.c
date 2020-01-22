#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(930, "random");
	double *A = create_one_dim_double(170, "random");
	double **B = create_two_dim_double(710, 620, "random");

	for (int c = 5; c < 619; c++)
	  for (int b = 3; b < 167; b++)
	    for (int a = 3; a < 167; a++)
	    {
	      
	      B[a][b]=B[a-3][b-5]/0.54;
	      
	      A[a]=A[a+3]+C[a]*B[a][b];
	      
	      B[a][b]=A[a];
	    }

    return 0;
}