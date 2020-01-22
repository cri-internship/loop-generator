#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(500, "random");
	double **A = create_two_dim_double(590, 10, "random");

	for (int c = 3; c < 10; c++)
	  for (int b = 5; b < 498; b++)
	    for (int a = 5; a < 498; a++)
	    {
	      
	      A[a][b]=A[a-1][b]+0.731;
	      
	      A[a][b]=A[a-5][b-3]*0.025;
	      
	      B[a]=B[a-2]-0.859;
	      
	      A[a][b]=A[a][b-2]/0.205;
	      
	      B[a]=0.104;
	      
	      double var_a=B[a]+0.379;
	      double var_b=B[a+2]/0.032;
	    }

    return 0;
}