#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(320, "ones");
	double **D = create_two_dim_double(240, 250, "ones");
	double *A = create_one_dim_double(400, "ones");
	double ***C = create_three_dim_double(780, 190, 620, "ones");

	for (int c = 4; c < 620; c++)
	  for (int b = 3; b < 190; b++)
	    for (int a = 4; a < 320; a++)
	    {
	      
	      C[a][b][c]=C[a-3][b-1][c-4]-D[a][b]/A[a];
	      
	      C[a][b][c]=C[a-4][b-3][c-3]-B[a];
	      
	      C[a][b][c]=C[a-2][b-1][c-2]+B[a]-A[a]*D[a][b];
	      
	      double var_a=B[a]*0.484;
	      B[a]=0.697;
	      
	      A[a]=0.327;
	      A[a-3]=0.838;
	      
	      A[a]=C[a][b][c]-B[a]+D[a][b];
	    }

    return 0;
}