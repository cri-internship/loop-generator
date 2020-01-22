#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(210, 240, "ones");
	float **E = create_two_dim_float(160, 510, "ones");
	float **D = create_two_dim_float(570, 440, "ones");
	float **A = create_two_dim_float(120, 610, "ones");
	float *B = create_one_dim_float(390, "ones");

	for (int a = 0; a < 156; a++)
	{
	  
	    B[a]=B[a+4]-0.013;
	  
	    B[a]=B[a+3]/0.226;
	  
	    C[a][a]=C[a][a+2]/0.838;
	  
	    E[a][a]=0.115;
	    E[a+4][a+3]=0.407;
	  
	    D[a][a]=D[a][a]+E[a][a]-B[a];
	    C[a][a]=D[a+2][a+4]-A[a][a]*A[a][a];
	  
	    float var_a=B[a]-0.671;
	    float var_b=B[a+1]*0.326;
	}

    return 0;
}