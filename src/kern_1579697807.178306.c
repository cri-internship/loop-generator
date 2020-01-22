#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(230, 720, 170, "ones");
	double *A = create_one_dim_double(150, "ones");

	for (int b = 3; b < 720; b++)
	  for (int a = 5; a < 230; a++)
	  {
	    
	     double var_a=B[a][b][a]/0.274;
	     double var_b=B[a-5][b-3][a-3]+0.538;
	  }

    return 0;
}