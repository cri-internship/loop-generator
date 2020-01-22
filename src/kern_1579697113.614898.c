#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(100, 660, "random");
	double *E = create_one_dim_double(580, "random");
	double *C = create_one_dim_double(660, "random");
	double *D = create_one_dim_double(130, "random");
	double *B = create_one_dim_double(150, "random");

	for (int d = 0; d < 127; d++)
	  for (int c = 0; c < 127; c++)
	    for (int b = 0; b < 127; b++)
	      for (int a = 0; a < 127; a++)
	      {
	        
	       double var_a=D[a]-0.623;
	       double var_b=D[a+3]-0.626;
	      }

    return 0;
}