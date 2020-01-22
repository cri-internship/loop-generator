#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *D = create_one_dim_double(740, "ones");
	double *B = create_one_dim_double(260, "ones");
	double **A = create_two_dim_double(310, 700, "ones");
	double **C = create_two_dim_double(910, 710, "ones");

	for (int c = 5; c < 710; c++)
	  for (int b = 5; b < 260; b++)
	    for (int a = 5; a < 260; a++)
	    {
	      
	      C[a][b]=C[a-1][b]-B[a]+D[a];
	      
	      C[a][b]=C[a-3][b-3]/A[a][b]-B[a];
	      
	      B[a]=0.456;
	      B[a-2]=0.02;
	      
	      double var_a=C[a][b]/0.423;
	      double var_b=C[a-5][b-2]+0.696;
	      
	      D[a]=C[a][b]-B[a];
	      C[a][b]=C[a-3][b-5]/A[a][b]-0.646;
	    }

    return 0;
}