#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(670, 90, 790, "zeros");
	double *B = create_one_dim_double(710, "zeros");

	for (int c = 3; c < 790; c++)
	  for (int b = 1; b < 87; b++)
	    for (int a = 1; a < 667; a++)
	    {
	      
	      A[a][b][c]=A[a-1][b-1][c-3]*0.328;
	      
	      double var_a=A[a][b][c]/0.709;
	      double var_b=A[a+3][b+3][c]-0.933;
	    }

    return 0;
}