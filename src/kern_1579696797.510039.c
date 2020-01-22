#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(90, 660, "ones");
	float *B = create_one_dim_float(340, "ones");

	for (int b = 0; b < 658; b++)
	  for (int a = 0; a < 86; a++)
	  {
	    
	     B[a]=B[a+4]-0.274;
	    
	     A[a][b]=B[a];
	     A[a+4][b+2]=B[a];
	  }

    return 0;
}