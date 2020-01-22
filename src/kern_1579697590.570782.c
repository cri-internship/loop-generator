#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(80, "zeros");
	double **B = create_two_dim_double(60, 830, "zeros");

	for (int b = 0; b < 830; b++)
	  for (int a = 2; a < 55; a++)
	  {
	    
	     A[a]=A[a-2]-0.533;
	    
	     B[a][b]=B[a+5][b]*0.309;
	    
	     B[a][b]=B[a+4][b]/A[a];
	  }

    return 0;
}