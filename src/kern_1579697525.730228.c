#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *E = create_one_dim_float(270, "random");
	float ***D = create_three_dim_float(860, 640, 320, "random");
	float *B = create_one_dim_float(90, "random");
	float *C = create_one_dim_float(650, "random");
	float **A = create_two_dim_float(390, 770, "random");

	for (int b = 4; b < 770; b++)
	  for (int a = 5; a < 270; a++)
	  {
	    
	     E[a]=E[a-5]*D[a][b][a]+A[a][b];
	    
	     A[a][b]=A[a][b-2]*0.211;
	    
	     A[a][b]=A[a-5][b-2]*0.175;
	  }

    return 0;
}