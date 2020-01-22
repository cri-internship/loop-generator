#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(510, "ones");
	double ***A = create_three_dim_double(310, 380, 20, "ones");
	double *B = create_one_dim_double(140, "ones");

	for (int d = 5; d < 20; d++)
	  for (int c = 2; c < 380; c++)
	    for (int b = 1; b < 310; b++)
	      for (int a = 1; a < 310; a++)
	      {
	        
	       A[a][b][c]=C[a]*0.286;
	       A[a][b][c]=B[a];
	        
	       C[a]=0.368;
	       C[a]=0.194;
	        
	       double var_a=A[a][b][c]+0.15;
	       double var_b=A[a-1][b-2][c-5]*0.922;
	      }

    return 0;
}