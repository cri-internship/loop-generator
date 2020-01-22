#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(970, "zeros");
	double *C = create_one_dim_double(930, "zeros");
	double *E = create_one_dim_double(630, "zeros");
	double *A = create_one_dim_double(830, "zeros");
	double *D = create_one_dim_double(410, "zeros");

	for (int c = 4; c < 410; c++)
	  for (int b = 4; b < 410; b++)
	    for (int a = 4; a < 410; a++)
	    {
	      
	      A[a]=A[a-3]*C[a]-E[a]/B[a]+D[a];
	      
	      D[a]=D[a-2]-A[a];
	      
	      B[a]=B[a-4]/0.742;
	      
	      A[a]=A[a]+0.244-C[a]/E[a]*B[a];
	    }

    return 0;
}