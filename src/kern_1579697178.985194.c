#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *E = create_one_dim_double(480, "ones");
	double **C = create_two_dim_double(570, 540, "ones");
	double *B = create_one_dim_double(710, "ones");
	double *A = create_one_dim_double(950, "ones");
	double *D = create_one_dim_double(920, "ones");

	for (int c = 0; c < 479; c++)
	  for (int b = 0; b < 479; b++)
	    for (int a = 0; a < 479; a++)
	    {
	      
	      E[a]=A[a]+D[a]-B[a]/C[a][b];
	      E[a+1]=A[a]*C[a][b]+B[a]-D[a];
	    }

    return 0;
}