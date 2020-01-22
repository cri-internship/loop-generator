#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **D = create_two_dim_double(40, 690, "ones");
	double ***B = create_three_dim_double(900, 70, 980, "ones");
	double *C = create_one_dim_double(930, "ones");
	double **A = create_two_dim_double(780, 140, "ones");

	for (int c = 0; c < 690; c++)
	  for (int b = 5; b < 40; b++)
	    for (int a = 5; a < 40; a++)
	    {
	      
	      C[a]=0.643;
	      C[a-5]=0.885;
	      
	      C[a]=0.111;
	      
	      D[a][b]=B[a][b][c]/C[a];
	      D[a-2][b]=A[a][b];
	      
	      double var_a=C[a]+0.334;
	      double var_b=C[a+2]+0.067;
	    }

    return 0;
}