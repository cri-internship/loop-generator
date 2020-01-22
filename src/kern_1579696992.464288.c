#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(220, "ones");
	double **C = create_two_dim_double(670, 440, "ones");
	double *A = create_one_dim_double(160, "ones");
	double ***D = create_three_dim_double(210, 730, 970, "ones");

	for (int c = 3; c < 970; c++)
	  for (int b = 2; b < 439; b++)
	    for (int a = 3; a < 156; a++)
	    {
	      
	      D[a][b][c]=D[a-1][b][c-3]+0.192;
	      
	      A[a]=D[a][b][c]-C[a][b]*0.323;
	      A[a-3]=B[a];
	      
	      A[a]=C[a][b]*D[a][b][c];
	      
	      C[a][b]=0.554;
	      C[a+2][b+1]=0.122;
	      
	      double var_a=C[a][b]-0.757;
	      double var_b=C[a-2][b-2]*0.086;
	    }

    return 0;
}