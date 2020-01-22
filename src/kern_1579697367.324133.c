#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***D = create_three_dim_float(390, 750, 940, "random");
	float **B = create_two_dim_float(330, 230, "random");
	float **A = create_two_dim_float(360, 720, "random");
	float *C = create_one_dim_float(550, "random");

	for (int c = 0; c < 940; c++)
	  for (int b = 0; b < 750; b++)
	    for (int a = 2; a < 390; a++)
	    {
	      
	      C[a]=C[a-2]/0.875;
	      
	      float var_a=D[a][b][c]-0.546;
	      float var_b=D[a][b][c]-0.675;
	    }

    return 0;
}