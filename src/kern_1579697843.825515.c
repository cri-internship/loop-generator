#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(20, 800, 220, "zeros");
	float ***D = create_three_dim_float(370, 20, 410, "zeros");
	float *C = create_one_dim_float(620, "zeros");
	float **B = create_two_dim_float(960, 470, "zeros");

	for (int a = 5; a < 20; a++)
	{
	  
	    A[a][a][a]=A[a-2][a-5][a]-B[a][a]+C[a]/D[a][a][a];
	  
	    D[a][a][a]=D[a-2][a-2][a-3]-A[a][a][a]*B[a][a]/A[a][a][a];
	  
	    C[a]=C[a+3]-B[a][a]*A[a][a][a]/D[a][a][a];
	  
	    B[a][a]=C[a]-B[a][a]/A[a][a][a]*D[a][a][a];
	    C[a]=C[a]+0.858;
	}

    return 0;
}