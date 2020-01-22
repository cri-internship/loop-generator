#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(30, 230, "random");
	double ***B = create_three_dim_double(480, 810, 780, "random");
	double *C = create_one_dim_double(360, "random");
	double *E = create_one_dim_double(640, "random");
	double *D = create_one_dim_double(290, "random");

	for (int b = 4; b < 360; b++)
	  for (int a = 4; a < 360; a++)
	  {
	    
	     C[a]=C[a-4]+0.17;
	  }

    return 0;
}