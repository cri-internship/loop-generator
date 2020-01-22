#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *D = create_one_dim_double(560, "random");
	double *A = create_one_dim_double(850, "random");
	double *E = create_one_dim_double(370, "random");
	double *C = create_one_dim_double(380, "random");
	double ***B = create_three_dim_double(930, 260, 990, "random");

	for (int b = 0; b < 849; b++)
	  for (int a = 0; a < 849; a++)
	  {
	    
	     double var_a=A[a]/0.401;
	     double var_b=A[a+1]+0.389;
	  }

    return 0;
}