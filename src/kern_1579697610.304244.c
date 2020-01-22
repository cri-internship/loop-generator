#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(260, 280, "random");
	double **A = create_two_dim_double(910, 190, "random");
	double *B = create_one_dim_double(910, "random");

	for (int b = 0; b < 276; b++)
	  for (int a = 0; a < 256; a++)
	  {
	    
	     double var_a=C[a][b]*0.188;
	     double var_b=C[a+4][b+4]-0.35;
	  }

    return 0;
}