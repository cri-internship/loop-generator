#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(20, 670, 600, "random");
	double *A = create_one_dim_double(980, "random");

	for (int b = 2; b < 666; b++)
	  for (int a = 5; a < 18; a++)
	  {
	    
	     A[a]=A[a-3]/0.283;
	    
	     A[a]=A[a+2]-0.29;
	    
	     B[a][b][a]=B[a+2][b+4][a+1]/A[a];
	    
	     B[a][b][a]=0.361;
	    
	     double var_a=B[a][b][a]*0.945;
	     double var_b=B[a][b-2][a-4]+0.207;
	  }

    return 0;
}