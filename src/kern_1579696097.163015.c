#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(340, 140, "random");
	float *A = create_one_dim_float(720, "random");
	float **B = create_two_dim_float(830, 450, "random");

	for (int a = 4; a < 340; a++)
	{
	  
	    A[a]=A[a-4]+C[a][a];
	  
	    A[a]=A[a+5]/B[a][a]*B[a][a];
	  
	    B[a][a]=0.848;
	    B[a][a-1]=0.254;
	  
	    B[a][a]=C[a][a]*0.492;
	    C[a][a]=C[a-2][a-2]*B[a][a]+0.581;
	  
	    A[a]=C[a][a]+0.985-B[a][a];
	    A[a]=C[a-3][a-1]-B[a][a]+A[a];
	}

    return 0;
}