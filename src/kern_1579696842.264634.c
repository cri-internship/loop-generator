#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(220, "random");
	float ***C = create_three_dim_float(880, 210, 940, "random");
	float **D = create_two_dim_float(630, 440, "random");
	float *A = create_one_dim_float(330, "random");
	float *E = create_one_dim_float(600, "random");

	for (int b = 0; b < 436; b++)
	  for (int a = 5; a < 220; a++)
	  {
	    
	     B[a]=B[a-2]+0.442;
	    
	     A[a]=A[a+1]+0.685;
	    
	     D[a][b]=0.279;
	     D[a+2][b+4]=0.784;
	    
	     float var_a=A[a]+0.48;
	     float var_b=A[a-5]+0.273;
	  }

    return 0;
}