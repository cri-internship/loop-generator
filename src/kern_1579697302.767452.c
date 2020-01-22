#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(330, 410, "zeros");
	double **B = create_two_dim_double(610, 480, "zeros");

	for (int c = 3; c < 406; c++)
	  for (int b = 5; b < 325; b++)
	    for (int a = 5; a < 325; a++)
	    {
	      
	      B[a][b]=B[a-3][b-3]-0.634;
	      
	      B[a][b]=B[a-4][b-3]/A[a][b];
	      
	      A[a][b]=0.389;
	      A[a+5][b+4]=0.255;
	      
	      A[a][b]=B[a][b];
	      
	      double var_a=B[a][b]+0.716;
	      double var_b=B[a+2][b]+0.266;
	      
	      A[a][b]=A[a][b]/B[a][b];
	      B[a][b]=A[a-5][b-1]*B[a][b];
	    }

    return 0;
}