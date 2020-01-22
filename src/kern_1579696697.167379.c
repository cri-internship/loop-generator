#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **D = create_two_dim_double(600, 750, "zeros");
	double ***C = create_three_dim_double(660, 10, 260, "zeros");
	double *A = create_one_dim_double(900, "zeros");
	double *B = create_one_dim_double(460, "zeros");

	for (int b = 5; b < 460; b++)
	  for (int a = 5; a < 460; a++)
	  {
	    
	     double var_a=B[a]+0.651;
	     double var_b=B[a-5]+0.47;
	  }

    return 0;
}