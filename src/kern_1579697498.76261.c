#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(100, 110, 220, "zeros");
	float *B = create_one_dim_float(460, "zeros");
	float **C = create_two_dim_float(220, 860, "zeros");

	for (int a = 5; a < 100; a++)
	{
	  
	    C[a][a]=C[a-5][a-2]*A[a][a][a]+0.808;
	  
	    A[a][a][a]=A[a][a][a-3]*C[a][a]/B[a];
	  
	    C[a][a]=C[a-3][a-3]+0.463;
	  
	    A[a][a][a]=0.121;
	  
	    B[a]=C[a][a];
	    B[a+2]=0.611;
	  
	    B[a]=0.795;
	}

    return 0;
}