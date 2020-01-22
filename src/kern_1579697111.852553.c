#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(720, "zeros");

	for (int b = 0; b < 715; b++)
	  for (int a = 0; a < 715; a++)
	  {
	    
	     A[a]=0.219;
	     A[a+5]=0.21;
	  }

    return 0;
}