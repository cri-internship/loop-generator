#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(950, 730, "random");
	float ***A = create_three_dim_float(780, 890, 960, "random");
	float **B = create_two_dim_float(450, 130, "random");

	for (int a = 4; a < 777; a++)
	{
	  
	    C[a][a]=0.477;
	    C[a-1][a-4]=0.661;
	  
	    float var_a=A[a][a][a]-0.115;
	    float var_b=A[a+3][a+3][a+2]*0.469;
	}

    return 0;
}