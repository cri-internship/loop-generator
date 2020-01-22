#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(270, 420, 750, "ones");
	double *B = create_one_dim_double(370, "ones");

	for (int d = 5; d < 750; d++)
	  for (int c = 4; c < 420; c++)
	    for (int b = 5; b < 270; b++)
	      for (int a = 5; a < 270; a++)
	      {
	        
	       A[a][b][c]=A[a-2][b-1][c]-B[a];
	        
	       A[a][b][c]=A[a-1][b-4][c-5]+0.533;
	        
	       A[a][b][c]=B[a]-0.598;
	       B[a]=B[a]/0.814;
	        
	       A[a][b][c]=B[a]-A[a][b][c];
	       B[a]=B[a-5]+A[a][b][c];
	      }

    return 0;
}