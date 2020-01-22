#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(670, 180, "zeros");
	float ***A = create_three_dim_float(840, 250, 760, "zeros");
	float **C = create_two_dim_float(880, 560, "zeros");
	float ***D = create_three_dim_float(660, 160, 510, "zeros");

	for (int a = 5; a < 655; a++)
	{
	  
	    D[a][a][a]=D[a-2][a-2][a-5]-0.481;
	  
	    D[a][a][a]=D[a+4][a+5][a+5]*0.195;
	  
	    float var_a=A[a][a][a]-0.517;
	    float var_b=A[a-4][a-3][a-2]+0.196;
	}

    return 0;
}