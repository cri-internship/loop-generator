#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(210, "random");
	float **B = create_two_dim_float(980, 690, "random");

	for (int b = 3; b < 685; b++)
	  for (int a = 4; a < 206; a++)
	  {
	    
	     B[a][b]=B[a-4][b-3]/0.732;
	    
	     A[a]=A[a-3]-0.791;
	    
	     B[a][b]=B[a+4][b+5]-0.543;
	    
	     A[a]=A[a+3]*0.165;
	    
	     float var_a=B[a][b]-0.355;
	     float var_b=B[a+4][b+1]+0.324;
	  }

    return 0;
}