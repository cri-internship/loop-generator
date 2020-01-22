#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(960, "ones");
	float *D = create_one_dim_float(70, "ones");
	float **B = create_two_dim_float(30, 520, "ones");
	float ***C = create_three_dim_float(300, 190, 740, "ones");

	for (int a = 5; a < 30; a++)
	{
	  
	    B[a][a]=B[a-4][a-5]*0.543;
	  
	    float var_a=C[a][a][a]*0.265;
	    float var_b=C[a][a-3][a-1]*0.999;
	  
	    B[a][a]=C[a][a][a]/B[a][a]+A[a]*D[a];
	    D[a]=C[a-4][a-5][a-2]-B[a][a]/D[a];
	}

    return 0;
}