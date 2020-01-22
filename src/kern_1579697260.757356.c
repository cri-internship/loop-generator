#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(890, 650, 640, "random");
	float **A = create_two_dim_float(970, 860, "random");
	float ***B = create_three_dim_float(100, 770, 460, "random");

	for (int b = 5; b < 647; b++)
	  for (int a = 4; a < 97; a++)
	  {
	    
	     B[a][b][a]=B[a][b+1][a+3]*0.244;
	    
	     C[a][b][a]=C[a+3][b+3][a+1]-0.196;
	    
	     C[a][b][a]=0.323;
	    
	     float var_a=B[a][b][a]*0.642;
	     float var_b=B[a-2][b-5][a-4]-0.729;
	  }

    return 0;
}