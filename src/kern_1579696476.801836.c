#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(470, 910, "random");
	float ***D = create_three_dim_float(170, 980, 100, "random");
	float ***C = create_three_dim_float(760, 870, 990, "random");
	float *B = create_one_dim_float(420, "random");

	for (int b = 0; b < 868; b++)
	  for (int a = 0; a < 165; a++)
	  {
	    
	     C[a][b][a]=C[a+4][b+2][a+1]/0.239;
	    
	     D[a][b][a]=D[a+1][b+2][a+5]-0.504;
	    
	     D[a][b][a]=D[a][b+2][a+3]+0.896;
	  }

    return 0;
}