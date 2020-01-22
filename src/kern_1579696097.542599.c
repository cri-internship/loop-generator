#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(250, 40, 840, "random");
	float **B = create_two_dim_float(580, 930, "random");
	float **A = create_two_dim_float(460, 240, "random");

	for (int b = 5; b < 240; b++)
	  for (int a = 5; a < 460; a++)
	  {
	    
	     B[a][b]=0.741;
	     B[a-3][b-1]=0.404;
	    
	     B[a][b]=A[a][b];
	    
	     float var_a=B[a][b]/0.733;
	     float var_b=B[a][b+3]/0.296;
	    
	     float var_c=A[a][b]+0.161;
	     float var_d=A[a-5][b-3]*0.48;
	  }

    return 0;
}