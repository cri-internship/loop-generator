#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(540, 260, "zeros");
	double *B = create_one_dim_double(680, "zeros");

	for (int b = 3; b < 680; b++)
	  for (int a = 3; a < 680; a++)
	  {
	    
	     B[a]=0.86;
	     float  var_a=B[a]*0.906;
	    
	     B[a]=0.722;
	  }

    return 0;
}