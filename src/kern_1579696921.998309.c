#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(120, 420, "random");
	double **B = create_two_dim_double(450, 870, "random");

	for (int c = 3; c < 418; c++)
	  for (int b = 2; b < 119; b++)
	    for (int a = 2; a < 119; a++)
	    {
	      
	      B[a][b]=B[a-1][b-2]*A[a][b];
	      
	      B[a][b]=B[a-1][b]/0.391;
	      
	      A[a][b]=B[a][b];
	      A[a+1][b+2]=0.212;
	      
	      double var_a=B[a][b]/0.794;
	      double var_b=B[a-2][b-3]+0.499;
	      
	      double var_c=B[a][b]+0.625;
	      double var_d=B[a+5][b+2]/0.897;
	    }

    return 0;
}