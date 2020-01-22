#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(440, 660, 70, "ones");
	float **E = create_two_dim_float(50, 430, "ones");
	float *D = create_one_dim_float(590, "ones");
	float **B = create_two_dim_float(240, 490, "ones");
	float *A = create_one_dim_float(970, "ones");

	for (int d = 0; d < 70; d++)
	  for (int c = 2; c < 489; c++)
	    for (int b = 2; b < 240; b++)
	      for (int a = 2; a < 240; a++)
	      {
	        
	       C[a][b][c]=C[a][b-2][c]+B[a][b];
	        
	       D[a]=D[a-1]*0.344;
	        
	       B[a][b]=B[a][b+1]-D[a]/C[a][b][c]+E[a][b];
	        
	       float var_a=A[a]/0.533;
	       float var_b=A[a-2]+0.067;
	      }

    return 0;
}