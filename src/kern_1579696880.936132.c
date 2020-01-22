#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(680, "random");
	float **B = create_two_dim_float(490, 530, "random");
	float **A = create_two_dim_float(850, 730, "random");

	for (int b = 5; b < 528; b++)
	  for (int a = 5; a < 488; a++)
	  {
	    
	     B[a][b]=B[a-5][b-5]*0.357;
	    
	     B[a][b]=B[a+2][b+2]-0.545;
	    
	     C[a]=0.329;
	     C[a-4]=0.867;
	  }

    return 0;
}