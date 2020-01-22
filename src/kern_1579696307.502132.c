#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(380, "zeros");
	float ***B = create_three_dim_float(910, 430, 530, "zeros");
	float *D = create_one_dim_float(990, "zeros");
	float ***A = create_three_dim_float(10, 230, 110, "zeros");

	for (int a = 5; a < 6; a++)
	{
	  
	    D[a]=D[a-5]/C[a];
	  
	    A[a][a][a]=A[a+4][a][a+2]*0.921;
	  
	    B[a][a][a]=B[a+3][a+5][a+2]+0.043;
	}

    return 0;
}