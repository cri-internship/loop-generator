#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(880, "ones");
	double ***A = create_three_dim_double(120, 30, 320, "ones");
	double *C = create_one_dim_double(900, "ones");

	for (int c = 0; c < 318; c++)
	  for (int b = 0; b < 26; b++)
	    for (int a = 5; a < 117; a++)
	    {
	      
	      C[a]=C[a-1]/B[a];
	      
	      B[a]=B[a-2]+0.757;
	      
	      C[a]=C[a-5]-0.837;
	      
	      B[a]=0.851;
	      
	      double var_a=A[a][b][c]-0.194;
	      double var_b=A[a+3][b+4][c+2]/0.72;
	    }

    return 0;
}