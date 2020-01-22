#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(70, 920, "zeros");

	for (int a = 4; a < 67; a++)
	{
	  
	    A[a][a]=0.227;
	    A[a-4][a]=0.081;
	  
	    float var_a=A[a][a]+0.726;
	    float var_b=A[a+3][a+3]+0.156;
	}

    return 0;
}