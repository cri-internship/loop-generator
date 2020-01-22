#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(410, "zeros");
	float **A = create_two_dim_float(960, 740, "zeros");

	for (int b = 1; b < 740; b++)
	  for (int a = 5; a < 410; a++)
	  {
	    
	     B[a]=B[a-3]*A[a][b];
	    
	     B[a]=B[a-5]+A[a][b];
	    
	     A[a][b]=A[a][b-1]*0.831;
	    
	     B[a]=0.127;
	    
	     float var_a=B[a]/0.06;
	  }

    return 0;
}