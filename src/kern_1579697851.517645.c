#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(900, 960, "ones");
	double ***B = create_three_dim_double(510, 690, 310, "ones");
	double *A = create_one_dim_double(360, "ones");

	for (int c = 1; c < 310; c++)
	  for (int b = 4; b < 690; b++)
	    for (int a = 5; a < 360; a++)
	    {
	      
	      A[a]=A[a-4]/C[a][b]-B[a][b][c];
	      
	      B[a][b][c]=B[a-5][b-4][c-1]/0.911;
	      
	      C[a][b]=C[a+4][b+4]/0.258;
	      
	      C[a][b]=A[a]*B[a][b][c];
	      B[a][b][c]=A[a-5]*C[a][b];
	      
	      double var_a=A[a]*0.08;
	      double var_b=A[a-3]*0.741;
	      
	      double var_c=A[a]/0.433;
	    }

    return 0;
}