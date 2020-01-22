#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(160, 320, 110, "zeros");
	double *A = create_one_dim_double(710, "zeros");

	for (int d = 4; d < 110; d++)
	  for (int c = 3; c < 318; c++)
	    for (int b = 4; b < 157; b++)
	      for (int a = 4; a < 157; a++)
	      {
	        
	       B[a][b][c]=B[a][b-3][c-1]-0.795;
	        
	       B[a][b][c]=B[a-4][b-3][c-4]-0.915;
	        
	       A[a]=A[a+1]*0.289;
	        
	       A[a]=0.157;
	        
	       B[a][b][c]=B[a][b][c]/A[a];
	       A[a]=B[a+3][b+2][c]+0.007;
	        
	       double var_a=A[a]/0.262;
	       double var_b=A[a+4]*0.791;
	      }

    return 0;
}