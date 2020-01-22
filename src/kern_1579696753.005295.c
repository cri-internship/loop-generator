#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(160, "ones");
	float ***D = create_three_dim_float(590, 960, 920, "ones");
	float **A = create_two_dim_float(950, 470, "ones");
	float **B = create_two_dim_float(990, 940, "ones");
	float **E = create_two_dim_float(750, 490, "ones");

	for (int d = 4; d < 917; d++)
	  for (int c = 5; c < 935; c++)
	    for (int b = 4; b < 586; b++)
	      for (int a = 4; a < 586; a++)
	      {
	        
	       D[a][b][c]=D[a+4][b+3][c+3]-E[a][b]*C[a]/A[a][b]+B[a][b];
	        
	       B[a][b]=B[a+1][b+3]-0.259;
	        
	       B[a][b]=B[a+3][b+5]*0.341;
	        
	       B[a][b]=B[a+5][b+1]*D[a][b][c]/E[a][b];
	        
	       D[a][b][c]=A[a][b];
	        
	       float var_a=D[a][b][c]*0.435;
	       float var_b=D[a-4][b-5][c-4]+0.924;
	      }

    return 0;
}