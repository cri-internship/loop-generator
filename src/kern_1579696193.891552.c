#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(480, 180, 10, "ones");
	double **B = create_two_dim_double(920, 790, "ones");
	double ***C = create_three_dim_double(180, 950, 170, "ones");

	for (int b = 5; b < 787; b++)
	  for (int a = 5; a < 180; a++)
	  {
	    
	     B[a][b]=0.834;
	     B[a][b+3]=0.817;
	    
	     C[a][b][a]=A[a][b][a]/B[a][b];
	     C[a-5][b-5][a]=B[a][b];
	    
	     double var_a=B[a][b]*0.44;
	     double var_b=B[a-5][b]-0.245;
	  }

    return 0;
}