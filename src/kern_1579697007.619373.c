#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(490, 430, "random");
	float ***A = create_three_dim_float(530, 770, 70, "random");
	float ***B = create_three_dim_float(940, 600, 250, "random");

	for (int a = 0; a < 485; a++)
	{
	  
	    C[a][a]=C[a][a+5]*0.123;
	  
	    B[a][a][a]=0.585;
	    B[a+3][a+5][a+4]=0.259;
	  
	    float var_a=B[a][a][a]*0.116;
	    float var_b=B[a][a+2][a+4]/0.948;
	}

    return 0;
}