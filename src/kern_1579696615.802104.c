#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(240, 900, "ones");
	double **D = create_two_dim_double(220, 980, "ones");
	double *B = create_one_dim_double(410, "ones");
	double **C = create_two_dim_double(570, 550, "ones");
	double *E = create_one_dim_double(390, "ones");

	for (int c = 5; c < 390; c++)
	  for (int b = 5; b < 390; b++)
	    for (int a = 5; a < 390; a++)
	    {
	      
	      E[a]=E[a-5]-0.237*A[a][b]+B[a];
	    }

    return 0;
}