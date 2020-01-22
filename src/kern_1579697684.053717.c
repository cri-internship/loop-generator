#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(960, "ones");
	double *B = create_one_dim_double(130, "ones");
	double ***C = create_three_dim_double(990, 20, 350, "ones");

	for (int b = 0; b < 126; b++)
	  for (int a = 0; a < 126; a++)
	  {
	    
	     B[a]=B[a+4]*A[a];
	  }

    return 0;
}