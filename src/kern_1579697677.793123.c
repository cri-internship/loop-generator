#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(520, "ones");
	double **E = create_two_dim_double(760, 500, "ones");
	double **C = create_two_dim_double(950, 330, "ones");
	double *A = create_one_dim_double(450, "ones");
	double *D = create_one_dim_double(370, "ones");

	for (int c = 0; c < 520; c++)
	  for (int b = 0; b < 520; b++)
	    for (int a = 0; a < 520; a++)
	    {
	      
	      B[a]=0.306;
	      float  var_a=B[a]+0.578;
	    }

    return 0;
}