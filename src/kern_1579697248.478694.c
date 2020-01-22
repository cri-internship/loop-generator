#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(410, "ones");
	float *C = create_one_dim_float(510, "ones");
	float ***B = create_three_dim_float(680, 650, 680, "ones");

	for (int a = 5; a < 410; a++)
	{
	  
	    C[a]=C[a-3]-0.731;
	  
	    C[a]=C[a+4]-0.708;
	  
	    A[a]=B[a][a][a]-0.686;
	    A[a]=0.414;
	  
	    B[a][a][a]=0.28;
	    B[a-2][a-5][a-5]=C[a]-A[a];
	}

    return 0;
}