#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(350, 640, 350, "random");
	float **A = create_two_dim_float(140, 160, "random");
	float *C = create_one_dim_float(780, "random");

	for (int c = 0; c < 346; c++)
	  for (int b = 0; b < 638; b++)
	    for (int a = 0; a < 345; a++)
	    {
	      
	      C[a]=C[a+2]/0.714;
	      
	      B[a][b][c]=0.063;
	      B[a+5][b][c+2]=0.221;
	      
	      float var_a=B[a][b][c]*0.344;
	      float var_b=B[a+2][b+2][c+4]+0.594;
	    }

    return 0;
}