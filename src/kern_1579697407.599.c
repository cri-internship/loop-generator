#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(510, 510, 330, "zeros");
	float ***E = create_three_dim_float(300, 500, 40, "zeros");
	float *D = create_one_dim_float(660, "zeros");
	float ***B = create_three_dim_float(350, 600, 800, "zeros");
	float ***A = create_three_dim_float(870, 910, 60, "zeros");

	for (int a = 5; a < 345; a++)
	{
	  
	    B[a][a][a]=B[a-3][a-5][a-4]-0.267;
	  
	    A[a][a][a]=A[a-1][a-3][a-5]-E[a][a][a]*D[a]+B[a][a][a]/C[a][a][a];
	  
	    C[a][a][a]=C[a-4][a-4][a]+A[a][a][a]/D[a]*B[a][a][a]-E[a][a][a];
	  
	    B[a][a][a]=B[a+5][a+4][a+5]-0.407;
	  
	    float var_a=D[a]/0.537;
	    float var_b=D[a]/0.43;
	  
	    E[a][a][a]=C[a][a][a]-B[a][a][a]*E[a][a][a];
	    A[a][a][a]=C[a][a][a+5]*B[a][a][a]+A[a][a][a]-D[a];
	}

    return 0;
}