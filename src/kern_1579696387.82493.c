#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(970, 420, 570, "random");
	float *B = create_one_dim_float(910, "random");
	float ***A = create_three_dim_float(110, 620, 80, "random");

	for (int a = 5; a < 105; a++)
	{
	  
	    A[a][a][a]=A[a-2][a-5][a-1]*0.944;
	  
	    A[a][a][a]=A[a-2][a-5][a-5]*0.266;
	  
	    B[a]=B[a+2]-0.541;
	  
	    B[a]=A[a][a][a]/C[a][a][a];
	  
	    C[a][a][a]=A[a][a][a]*C[a][a][a];
	    A[a][a][a]=A[a+3][a+2][a+5]-B[a];
	  
	    B[a]=B[a]*0.236-A[a][a][a];
	    C[a][a][a]=B[a-5]/A[a][a][a];
	  
	    C[a][a][a]=C[a][a][a]-A[a][a][a];
	    C[a][a][a]=C[a-2][a-2][a-2]*B[a]-A[a][a][a];
	}

    return 0;
}