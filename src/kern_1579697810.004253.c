#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(30, "zeros");
	float **B = create_two_dim_float(270, 410, "zeros");

	for (int b = 2; b < 408; b++)
	  for (int a = 4; a < 30; a++)
	  {
	    
	     B[a][b]=B[a-2][b-2]/0.135;
	    
	     A[a]=A[a-4]/0.608;
	    
	     B[a][b]=B[a+5][b+2]*0.771;
	    
	     A[a]=B[a][b];
	    
	     B[a][b]=A[a]/0.728;
	     A[a]=A[a-2]-B[a][b];
	  }

    return 0;
}