#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(730, 870, 720, "zeros");
	float *D = create_one_dim_float(870, "zeros");
	float **C = create_two_dim_float(90, 180, "zeros");
	float ***B = create_three_dim_float(790, 1000, 200, "zeros");

	for (int a = 5; a < 85; a++)
	{
	  
	    A[a][a][a]=A[a][a][a+1]-0.395;
	  
	    C[a][a]=C[a+2][a+5]/0.372;
	  
	    B[a][a][a]=0.796;
	    B[a-4][a-5][a-1]=0.553;
	  
	    float var_a=D[a]*0.591;
	    float var_b=D[a]/0.045;
	}

    return 0;
}