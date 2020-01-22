#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(660, 280, 980, "random");
	float **A = create_two_dim_float(130, 740, "random");

	for (int a = 4; a < 130; a++)
	{
	  
	    A[a][a]=A[a-4][a-4]+B[a][a][a];
	  
	    A[a][a]=A[a-1][a-1]*0.972;
	  
	    float var_a=A[a][a]-0.98;
	    float var_b=A[a][a-1]+0.595;
	}

    return 0;
}