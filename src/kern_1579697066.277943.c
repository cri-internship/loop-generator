#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(860, "ones");
	double *C = create_one_dim_double(390, "ones");
	double ***A = create_three_dim_double(130, 440, 750, "ones");
	double **D = create_two_dim_double(560, 400, "ones");

	for (int b = 0; b < 390; b++)
	  for (int a = 0; a < 390; a++)
	  {
	    
	     C[a]=0.895;
	     float  var_a=C[a]-0.867;
	  }

    return 0;
}