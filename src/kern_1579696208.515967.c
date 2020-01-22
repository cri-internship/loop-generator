#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(880, "zeros");
	double **B = create_two_dim_double(690, 760, "zeros");

	for (int c = 5; c < 757; c++)
	  for (int b = 4; b < 689; b++)
	    for (int a = 4; a < 689; a++)
	    {
	      
	      B[a][b]=B[a-4][b-5]/0.312;
	      
	      B[a][b]=A[a];
	      
	      B[a][b]=A[a]/B[a][b];
	      A[a]=A[a+5]*B[a][b];
	    }

    return 0;
}