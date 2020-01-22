#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *E = create_one_dim_float(790, "random");
	float **C = create_two_dim_float(540, 410, "random");
	float **D = create_two_dim_float(680, 290, "random");
	float ***A = create_three_dim_float(450, 450, 590, "random");
	float *B = create_one_dim_float(860, "random");

	for (int a = 5; a < 680; a++)
	{
	  
	    float var_a=E[a]*0.322;
	    E[a]=0.017;
	  
	    D[a][a]=B[a]+E[a]/A[a][a][a]*C[a][a];
	    D[a-5][a-3]=0.347/C[a][a];
	}

    return 0;
}