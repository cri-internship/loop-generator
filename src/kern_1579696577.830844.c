#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(400, 160, 440, "random");
	double *A = create_one_dim_double(670, "random");
	double ***B = create_three_dim_double(620, 110, 120, "random");

	for (int b = 0; b < 110; b++)
	  for (int a = 1; a < 395; a++)
	  {
	    
	     C[a][b][a]=C[a+2][b][a+5]+0.059;
	    
	     double var_a=B[a][b][a]+0.965;
	     double var_b=B[a-1][b][a]/0.881;
	  }

    return 0;
}