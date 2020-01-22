#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(150, 860, "random");
	double *C = create_one_dim_double(890, "random");
	double **D = create_two_dim_double(380, 660, "random");
	double **B = create_two_dim_double(10, 850, "random");
	double *E = create_one_dim_double(140, "random");

	for (int b = 0; b < 890; b++)
	  for (int a = 0; a < 890; a++)
	  {
	    
	     double var_a=C[a]/0.955;
	     C[a]=0.004;
	  }

    return 0;
}