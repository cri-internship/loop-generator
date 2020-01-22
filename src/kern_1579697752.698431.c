#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(980, "random");
	float **A = create_two_dim_float(490, 730, "random");

	for (int b = 1; b < 726; b++)
	  for (int a = 5; a < 485; a++)
	  {
	    
	     A[a][b]=A[a-4][b]*0.851;
	    
	     A[a][b]=A[a-2][b-1]+0.387;
	    
	     A[a][b]=A[a-5][b]/0.426;
	    
	     B[a]=0.335;
	     B[a-5]=0.535;
	    
	     float var_a=A[a][b]+0.861;
	     float var_b=A[a+5][b+2]*0.902;
	  }

    return 0;
}