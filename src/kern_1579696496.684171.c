#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(870, "zeros");

	for (int b = 5; b < 870; b++)
	  for (int a = 5; a < 870; a++)
	  {
	    
	     double var_a=A[a]+0.915;
	     double var_b=A[a]+0.222;
	    
	     double var_c=A[a]+0.748;
	     double var_d=A[a-5]*0.872;
	  }

    return 0;
}