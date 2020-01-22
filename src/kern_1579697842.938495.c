#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(60, 700, "random");
	double **B = create_two_dim_double(770, 120, "random");

	for (int c = 2; c < 120; c++)
	  for (int b = 5; b < 58; b++)
	    for (int a = 5; a < 58; a++)
	    {
	      
	      B[a][b]=B[a][b-2]/A[a][b];
	      
	      B[a][b]=B[a-1][b-1]*0.876;
	      
	      A[a][b]=B[a][b];
	      A[a-5][b-1]=0.737;
	      
	      A[a][b]=A[a][b]-0.995;
	      B[a][b]=A[a][b-1]*B[a][b];
	      
	      double var_a=A[a][b]/0.391;
	      double var_b=A[a+2][b]/0.648;
	      
	      double var_c=A[a][b]/0.351;
	      double var_d=A[a+2][b+2]/0.287;
	    }

    return 0;
}