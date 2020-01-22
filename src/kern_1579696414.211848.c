#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(650, 840, 110, "random");
	float ***E = create_three_dim_float(780, 510, 580, "random");
	float *A = create_one_dim_float(680, "random");
	float *B = create_one_dim_float(690, "random");
	float ***D = create_three_dim_float(180, 1000, 690, "random");

	for (int b = 0; b < 840; b++)
	  for (int a = 0; a < 648; a++)
	  {
	    
	     float var_a=A[a]+0.672;
	     A[a]=0.111;
	    
	     C[a][b][a]=0.99;
	     C[a+2][b][a]=0.708;
	  }

    return 0;
}