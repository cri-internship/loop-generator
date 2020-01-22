#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(810, "random");
	double **A = create_two_dim_double(620, 140, "random");

	for (int b = 0; b < 137; b++)
	  for (int a = 0; a < 620; a++)
	  {
	    
	     double var_a=A[a][b]-0.786;
	     double var_b=A[a][b+3]*0.436;
	  }

    return 0;
}