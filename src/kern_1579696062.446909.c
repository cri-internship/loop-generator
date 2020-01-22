#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(100, 380, "random");
	float ***D = create_three_dim_float(60, 770, 80, "random");
	float **C = create_two_dim_float(470, 620, "random");
	float ***A = create_three_dim_float(590, 880, 40, "random");
	float ***E = create_three_dim_float(310, 60, 670, "random");

	for (int a = 0; a < 97; a++)
	{
	  
	    C[a][a]=C[a+1][a+3]/0.559;
	  
	    float var_a=B[a][a]+0.422;
	    float var_b=B[a+3][a]*0.922;
	}

    return 0;
}