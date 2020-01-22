#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(500, 140, "zeros");

	for (int b = 1; b < 140; b++)
	  for (int a = 0; a < 500; a++)
	  {
	    
	     double var_a=A[a][b]*0.449;
	     double var_b=A[a][b-1]+0.425;
	  }

    return 0;
}