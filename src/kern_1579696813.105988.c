#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *D = create_one_dim_double(610, "random");
	double *A = create_one_dim_double(840, "random");
	double *B = create_one_dim_double(230, "random");
	double **C = create_two_dim_double(780, 170, "random");

	for (int c = 0; c < 170; c++)
	  for (int b = 4; b < 608; b++)
	    for (int a = 4; a < 608; a++)
	    {
	      
	      C[a][b]=C[a-2][b]+D[a]/B[a];
	      
	      D[a]=D[a+2]/0.728;
	      
	      D[a]=0.795;
	      
	      double var_a=A[a]+0.099;
	      double var_b=A[a-3]+0.85;
	    }

    return 0;
}