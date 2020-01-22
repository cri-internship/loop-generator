#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(910, "random");
	double ***B = create_three_dim_double(240, 760, 370, "random");

	for (int b = 1; b < 759; b++)
	  for (int a = 5; a < 235; a++)
	  {
	    
	     B[a][b][a]=B[a-5][b-1][a]/0.021;
	    
	     B[a][b][a]=B[a+5][b][a+2]-A[a];
	    
	     double var_a=A[a]+0.354;
	     double var_b=A[a-3]*0.32;
	  }

    return 0;
}