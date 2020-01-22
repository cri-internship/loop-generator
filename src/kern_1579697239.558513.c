#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *D = create_one_dim_double(110, "random");
	double ***A = create_three_dim_double(360, 950, 810, "random");
	double ***B = create_three_dim_double(860, 440, 910, "random");
	double *C = create_one_dim_double(570, "random");

	for (int b = 3; b < 440; b++)
	  for (int a = 4; a < 110; a++)
	  {
	    
	     B[a][b][a]=B[a][b-3][a-2]/0.06;
	    
	     D[a]=0.887;
	     D[a-4]=0.004;
	    
	     double var_a=B[a][b][a]-0.877;
	     double var_b=B[a-3][b][a-1]+0.481;
	  }

    return 0;
}