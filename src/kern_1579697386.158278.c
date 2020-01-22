#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(530, 940, 760, "ones");
	float ***B = create_three_dim_float(160, 530, 790, "ones");

	for (int a = 4; a < 155; a++)
	{
	  
	    A[a][a][a]=A[a-4][a-4][a-4]*0.632;
	  
	    A[a][a][a]=A[a-2][a-4][a-3]+B[a][a][a];
	  
	    B[a][a][a]=B[a+4][a+4][a+2]*0.571;
	  
	    A[a][a][a]=A[a][a+1][a+3]*0.539;
	  
	    B[a][a][a]=A[a][a][a];
	  
	    float var_a=B[a][a][a]-0.732;
	    float var_b=B[a+5][a][a+4]+0.894;
	  
	    B[a][a][a]=A[a][a][a]/B[a][a][a];
	    A[a][a][a]=A[a][a+2][a]/B[a][a][a];
	}

    return 0;
}