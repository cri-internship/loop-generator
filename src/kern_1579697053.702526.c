#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(350, 70, 350, "ones");
	float *B = create_one_dim_float(520, "ones");
	float *A = create_one_dim_float(160, "ones");

	for (int a = 5; a < 156; a++)
	{
	  
	    A[a]=A[a-1]*0.507;
	  
	    A[a]=A[a+4]/B[a];
	  
	    C[a][a][a]=C[a][a][a]-A[a];
	    B[a]=C[a-5][a-1][a-3]/B[a]*A[a];
	  
	    float var_a=A[a]/0.133;
	    float var_b=A[a+2]+0.59;
	}

    return 0;
}