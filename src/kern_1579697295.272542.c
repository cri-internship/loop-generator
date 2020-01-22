#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(380, "zeros");
	float *C = create_one_dim_float(20, "zeros");
	float ***A = create_three_dim_float(170, 630, 330, "zeros");
	float ***D = create_three_dim_float(300, 1000, 750, "zeros");

	for (int a = 5; a < 20; a++)
	{
	  
	    D[a][a][a]=D[a-4][a-2][a-2]*0.73;
	  
	    C[a]=A[a][a][a]+B[a];
	    D[a][a][a]=C[a]*D[a][a][a]-A[a][a][a]/B[a];
	  
	    A[a][a][a]=A[a-1][a-1][a-3]-0.556;
	  
	    B[a]=B[a+3]*0.824;
	  
	    A[a][a][a]=0.532;
	  
	    B[a]=A[a][a][a]+C[a]*D[a][a][a]-B[a];
	    C[a]=A[a-4][a][a-5]+B[a];
	  
	    A[a][a][a]=B[a]/D[a][a][a]+C[a];
	    A[a][a][a]=B[a-5]-0.542;
	}

    return 0;
}