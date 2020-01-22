#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***D = create_three_dim_float(940, 210, 750, "ones");
	float *C = create_one_dim_float(380, "ones");
	float **E = create_two_dim_float(880, 750, "ones");
	float **B = create_two_dim_float(580, 400, "ones");
	float *A = create_one_dim_float(50, "ones");

	for (int c = 0; c < 749; c++)
	  for (int b = 5; b < 206; b++)
	    for (int a = 2; a < 45; a++)
	    {
	      
	      D[a][b][c]=D[a-2][b-5][c]-C[a]/B[a][b]+A[a];
	      
	      B[a][b]=0.062;
	      float  var_a=B[a][b]/0.396;
	      
	      A[a]=A[a+5]*D[a][b][c]/E[a][b]-C[a];
	      
	      D[a][b][c]=D[a+5][b+4][c]/B[a][b]+E[a][b];
	      
	      A[a]=0.829;
	      
	      B[a][b]=E[a][b]*D[a][b][c]/0.885+C[a]-B[a][b];
	      E[a][b]=E[a+3][b+1]+D[a][b][c]*A[a]-B[a][b]/C[a];
	    }

    return 0;
}