#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(440, 810, 960, "zeros");
	double *D = create_one_dim_double(130, "zeros");
	double *C = create_one_dim_double(150, "zeros");
	double **B = create_two_dim_double(100, 60, "zeros");

	for (int b = 5; b < 150; b++)
	  for (int a = 5; a < 150; a++)
	  {
	    
	     C[a]=0.792;
	     C[a-5]=0.445;
	  }

    return 0;
}