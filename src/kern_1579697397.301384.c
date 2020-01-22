#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(550, 690, "ones");
	double *C = create_one_dim_double(670, "ones");
	double **B = create_two_dim_double(350, 880, "ones");

	for (int c = 5; c < 688; c++)
	  for (int b = 5; b < 350; b++)
	    for (int a = 5; a < 350; a++)
	    {
	      
	      B[a][b]=B[a-5][b-2]-A[a][b]*C[a];
	      
	      A[a][b]=A[a-4][b-5]+B[a][b];
	      
	      A[a][b]=A[a][b+1]*0.142;
	      
	      C[a]=A[a][b];
	      C[a+1]=A[a][b];
	      
	      B[a][b]=0.376;
	      
	      double var_a=B[a][b]/0.16;
	      double var_b=B[a-2][b-4]+0.184;
	    }

    return 0;
}