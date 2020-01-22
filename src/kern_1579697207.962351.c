#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(330, "zeros");
	double *A = create_one_dim_double(740, "zeros");

	for (int b = 0; b < 325; b++)
	  for (int a = 0; a < 325; a++)
	  {
	    
	     B[a]=B[a+5]+0.86;
	  }

    return 0;
}