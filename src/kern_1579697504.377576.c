#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(950, 550, 730, "ones");
	double *C = create_one_dim_double(700, "ones");
	double ***A = create_three_dim_double(260, 610, 460, "ones");

	for (int b = 4; b < 550; b++)
	  for (int a = 4; a < 696; a++)
	  {
	    
	     B[a][b][a]=B[a][b-4][a-4]-0.119;
	    
	     double var_a=C[a]-0.717;
	     double var_b=C[a+4]-0.125;
	  }

    return 0;
}