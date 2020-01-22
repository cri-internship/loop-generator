#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(40, 630, "random");
	double **B = create_two_dim_double(180, 510, "random");
	double *A = create_one_dim_double(140, "random");

	for (int c = 3; c < 507; c++)
	  for (int b = 1; b < 35; b++)
	    for (int a = 1; a < 35; a++)
	    {
	      
	      C[a][b]=C[a-1][b-3]-B[a][b]*A[a];
	      
	      C[a][b]=C[a+4][b+2]*0.361;
	      
	      B[a][b]=0.692;
	      B[a+3][b+3]=0.633;
	      
	      B[a][b]=0.875;
	      
	      double var_a=A[a]*0.752;
	      double var_b=A[a+1]/0.082;
	      
	      B[a][b]=C[a][b]*A[a];
	      A[a]=C[a+5][b+5]/B[a][b]+A[a];
	    }

    return 0;
}