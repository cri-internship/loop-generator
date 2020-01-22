#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(170, "random");
	double ***B = create_three_dim_double(310, 140, 990, "random");
	double *A = create_one_dim_double(460, "random");

	for (int b = 0; b < 137; b++)
	  for (int a = 0; a < 166; a++)
	  {
	    
	     C[a]=C[a+4]+0.331;
	    
	     B[a][b][a]=A[a]*C[a];
	     B[a+1][b][a+3]=0.68;
	    
	     B[a][b][a]=0.058;
	    
	     double var_a=C[a]+0.056;
	     double var_b=C[a+1]-0.983;
	  }

    return 0;
}