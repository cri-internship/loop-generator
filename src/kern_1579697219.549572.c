#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(960, 420, 70, "ones");
	double *B = create_one_dim_double(740, "ones");

	for (int c = 0; c < 66; c++)
	  for (int b = 0; b < 419; b++)
	    for (int a = 5; a < 735; a++)
	    {
	      
	      B[a]=B[a-5]/0.506;
	      
	      B[a]=B[a+3]+A[a][b][c];
	      
	      double var_a=B[a]/0.482;
	      double var_b=B[a+5]/0.77;
	      
	      A[a][b][c]=A[a][b][c]*0.637;
	      B[a]=A[a][b+1][c+4]+B[a];
	    }

    return 0;
}