#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(990, 870, 440, "ones");
	float *A = create_one_dim_float(130, "ones");
	float **C = create_two_dim_float(180, 260, "ones");

	for (int d = 1; d < 438; d++)
	  for (int c = 3; c < 257; c++)
	    for (int b = 5; b < 130; b++)
	      for (int a = 5; a < 130; a++)
	      {
	        
	       B[a][b][c]=B[a-5][b-3][c-1]*0.708;
	        
	       C[a][b]=C[a+5][b+3]/0.528;
	        
	       A[a]=A[a]-B[a][b][c]/C[a][b];
	       A[a]=B[a][b][c]/0.996;
	        
	       float var_a=B[a][b][c]/0.293;
	       float var_b=B[a+4][b+2][c+2]*0.53;
	        
	       float var_c=C[a][b]+0.352;
	       float var_d=C[a-1][b-1]/0.671;
	      }

    return 0;
}