#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(630, 200, 410, "random");
	float ***B = create_three_dim_float(690, 150, 910, "random");
	float *A = create_one_dim_float(460, "random");

	for (int a = 5; a < 460; a++)
	{
	  
	    C[a][a][a]=C[a-5][a-5][a-1]-0.692;
	  
	    B[a][a][a]=B[a-1][a-1][a-5]/0.696;
	  
	    C[a][a][a]=C[a-3][a-2][a-3]-0.593;
	  
	    A[a]=B[a][a][a]/A[a];
	    C[a][a][a]=B[a+5][a+5][a]*C[a][a][a]/0.522;
	  
	    B[a][a][a]=B[a][a][a]+A[a];
	    C[a][a][a]=B[a+4][a+5][a+4]/0.383-C[a][a][a];
	  
	    A[a]=C[a][a][a]*0.104-B[a][a][a];
	    B[a][a][a]=C[a-1][a-1][a-3]+B[a][a][a]/A[a];
	  
	    float var_a=A[a]-0.606;
	    float var_b=A[a-4]*0.718;
	}

    return 0;
}