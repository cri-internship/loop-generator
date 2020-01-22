#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(940, 430, "random");
	double **B = create_two_dim_double(990, 550, "random");
	double *A = create_one_dim_double(770, "random");
	double *D = create_one_dim_double(690, "random");

	for (int c = 5; c < 430; c++)
	  for (int b = 5; b < 690; b++)
	    for (int a = 5; a < 690; a++)
	    {
	      
	      B[a][b]=B[a-4][b-4]-0.648;
	      
	      D[a]=D[a-1]+B[a][b]-C[a][b];
	      
	      C[a][b]=C[a-1][b-5]*0.528;
	      
	      double var_a=C[a][b]+0.416;
	      double var_b=C[a-5][b-2]*0.575;
	    }

    return 0;
}