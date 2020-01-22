#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *E = create_one_dim_double(170, "random");
	double *D = create_one_dim_double(80, "random");
	double **A = create_two_dim_double(280, 200, "random");
	double *B = create_one_dim_double(250, "random");
	double **C = create_two_dim_double(730, 590, "random");

	for (int c = 0; c < 588; c++)
	  for (int b = 3; b < 245; b++)
	    for (int a = 3; a < 245; a++)
	    {
	      
	      B[a]=B[a-3]+C[a][b]/D[a]-A[a][b];
	      
	      C[a][b]=C[a+4][b]*0.304;
	      
	      B[a]=0.074;
	      
	      double var_a=C[a][b]/0.914;
	      double var_b=C[a][b+2]/0.423;
	    }

    return 0;
}