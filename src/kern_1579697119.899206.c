#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(310, "zeros");
	double ***B = create_three_dim_double(630, 500, 790, "zeros");

	for (int c = 4; c < 790; c++)
	  for (int b = 1; b < 500; b++)
	    for (int a = 4; a < 307; a++)
	    {
	      
	      A[a]=A[a-4]/0.422;
	      
	      B[a][b][c]=B[a-2][b-1][c-4]*0.257;
	      
	      A[a]=A[a]*B[a][b][c];
	      
	      A[a]=A[a+1]/B[a][b][c];
	      
	      double var_a=A[a]+0.249;
	      double var_b=A[a+3]*0.824;
	    }

    return 0;
}