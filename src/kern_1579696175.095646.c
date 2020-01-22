#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(380, 870, "ones");
	float *A = create_one_dim_float(170, "ones");

	for (int b = 0; b < 869; b++)
	  for (int a = 1; a < 170; a++)
	  {
	    
	     B[a][b]=B[a-1][b]-0.505;
	    
	     A[a]=0.929;
	     float  var_a=A[a]+0.367;
	    
	     A[a]=B[a][b]+A[a];
	     B[a][b]=B[a+1][b+1]-A[a];
	  }

    return 0;
}