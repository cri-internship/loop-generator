#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(960, "ones");
	double **B = create_two_dim_double(280, 940, "ones");

	for (int b = 1; b < 938; b++)
	  for (int a = 5; a < 278; a++)
	  {
	    
	     B[a][b]=B[a-3][b-1]+A[a];
	    
	     A[a]=A[a-5]*0.756;
	    
	     A[a]=B[a][b];
	    
	     B[a][b]=B[a+2][b+2]*0.625;
	  }

    return 0;
}