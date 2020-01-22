#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(760, 710, "zeros");
	float *B = create_one_dim_float(770, "zeros");

	for (int b = 5; b < 706; b++)
	  for (int a = 5; a < 756; a++)
	  {
	    
	     A[a][b]=A[a-5][b-1]/B[a];
	    
	     A[a][b]=A[a+3][b+4]/0.561;
	    
	     B[a]=B[a+5]-A[a][b];
	    
	     B[a]=0.091;
	    
	     A[a][b]=A[a][b]*B[a];
	     B[a]=A[a-3][b-5]+B[a];
	  }

    return 0;
}