#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(110, 280, "zeros");
	float ***E = create_three_dim_float(610, 400, 410, "zeros");
	float *C = create_one_dim_float(630, "zeros");
	float **B = create_two_dim_float(680, 20, "zeros");
	float ***D = create_three_dim_float(460, 340, 120, "zeros");

	for (int a = 0; a < 455; a++)
	{
	  
	    E[a][a][a]=E[a+2][a+2][a]-0.938;
	  
	    E[a][a][a]=E[a+5][a+3][a+2]/A[a][a]*B[a][a]-D[a][a][a];
	  
	    float var_a=D[a][a][a]/0.344;
	    float var_b=D[a+5][a+1][a+4]*0.438;
	}

    return 0;
}