#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(870, "ones");
	double *D = create_one_dim_double(690, "ones");
	double *B = create_one_dim_double(80, "ones");
	double **C = create_two_dim_double(130, 230, "ones");

	for (int c = 3; c < 80; c++)
	  for (int b = 3; b < 80; b++)
	    for (int a = 3; a < 80; a++)
	    {
	      
	      B[a]=B[a-3]/0.571;
	      
	      D[a]=D[a+2]-B[a]*A[a]/0.966;
	    }

    return 0;
}