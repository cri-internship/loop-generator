#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(770, 850, 80, "ones");
	double ***B = create_three_dim_double(800, 410, 720, "ones");
	double *A = create_one_dim_double(320, "ones");

	for (int c = 0; c < 76; c++)
	  for (int b = 0; b < 410; b++)
	    for (int a = 4; a < 320; a++)
	    {
	      
	      A[a]=A[a-4]-B[a][b][c]*C[a][b][c];
	      
	      B[a][b][c]=B[a][b][c+3]/0.176;
	      
	      A[a]=B[a][b][c];
	      
	      C[a][b][c]=C[a+1][b][c+4]/0.638;
	      
	      double var_a=C[a][b][c]*0.434;
	      double var_b=C[a+2][b+2][c+2]*0.757;
	    }

    return 0;
}