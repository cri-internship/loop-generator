#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***D = create_three_dim_float(250, 860, 920, "zeros");
	float ***B = create_three_dim_float(660, 310, 50, "zeros");
	float ***C = create_three_dim_float(980, 560, 830, "zeros");
	float **A = create_two_dim_float(410, 520, "zeros");

	for (int a = 5; a < 250; a++)
	{
	  
	    float var_a=D[a][a][a]*0.615;
	    float var_b=D[a-4][a-4][a-5]*0.206;
	}

    return 0;
}