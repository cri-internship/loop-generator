#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(950, 780, 360, "random");
	float ***D = create_three_dim_float(330, 720, 620, "random");
	float *C = create_one_dim_float(570, "random");
	float ***B = create_three_dim_float(760, 310, 420, "random");

	for (int a = 5; a < 325; a++)
	{
	  
	    D[a][a][a]=0.796;
	    D[a+5][a+1][a+3]=0.15;
	  
	    A[a][a][a]=C[a]*B[a][a][a]-D[a][a][a];
	    A[a-4][a-3][a-2]=D[a][a][a]-C[a];
	  
	    C[a]=0.507;
	    C[a]=0.804;
	  
	    float var_a=B[a][a][a]*0.556;
	    float var_b=B[a-4][a-2][a-5]-0.866;
	}

    return 0;
}