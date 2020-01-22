#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(50, "random");
	double ***B = create_three_dim_double(1000, 440, 730, "random");

	for (int d = 3; d < 727; d++)
	  for (int c = 3; c < 440; c++)
	    for (int b = 4; b < 50; b++)
	      for (int a = 4; a < 50; a++)
	      {
	        
	       A[a]=A[a-4]*0.832;
	        
	       B[a][b][c]=B[a-2][b-3][c-3]+A[a];
	        
	       A[a]=A[a-2]-0.291;
	        
	       A[a]=A[a]/B[a][b][c];
	        
	       double var_a=B[a][b][c]+0.466;
	       double var_b=B[a+1][b][c+3]+0.736;
	      }

    return 0;
}