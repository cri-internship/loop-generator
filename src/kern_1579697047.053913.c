#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(330, "zeros");
	double ***D = create_three_dim_double(980, 580, 300, "zeros");
	double **C = create_two_dim_double(580, 540, "zeros");
	double ***B = create_three_dim_double(760, 30, 440, "zeros");

	for (int c = 1; c < 540; c++)
	  for (int b = 5; b < 330; b++)
	    for (int a = 5; a < 330; a++)
	    {
	      
	      C[a][b]=C[a-5][b-1]+0.168;
	      
	      A[a]=A[a-2]+0.363;
	      
	      double var_a=C[a][b]/0.946;
	      double var_b=C[a+5][b]-0.362;
	    }

    return 0;
}