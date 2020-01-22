#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(150, 430, 830, "ones");
	double *C = create_one_dim_double(190, "ones");
	double **B = create_two_dim_double(190, 670, "ones");

	for (int b = 0; b < 425; b++)
	  for (int a = 0; a < 147; a++)
	  {
	    
	     A[a][b][a]=A[a+3][b+5][a]/C[a];
	  }

    return 0;
}