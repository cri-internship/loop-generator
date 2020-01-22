#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(500, 210, 40, "zeros");
	double **C = create_two_dim_double(520, 640, "zeros");
	double *A = create_one_dim_double(50, "zeros");

	for (int c = 3; c < 39; c++)
	  for (int b = 3; b < 210; b++)
	    for (int a = 5; a < 50; a++)
	    {
	      
	      C[a][b]=C[a-5][b]/0.899;
	      
	      C[a][b]=C[a-2][b-3]/0.496;
	      
	      A[a]=B[a][b][c]*C[a][b];
	      B[a][b][c]=A[a]*0.122;
	      
	      B[a][b][c]=B[a-4][b-1][c-3]+A[a];
	      
	      B[a][b][c]=B[a+3][b][c+1]-0.579*A[a];
	      
	      double var_a=C[a][b]*0.005;
	      double var_b=C[a-2][b]*0.29;
	    }

    return 0;
}