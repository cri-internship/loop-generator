#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(650, 200, 200, "ones");
	float ***B = create_three_dim_float(110, 110, 170, "ones");
	float **A = create_two_dim_float(760, 200, "ones");

	for (int a = 5; a < 105; a++)
	{
	  
	    C[a][a][a]=C[a-4][a][a-1]+0.689;
	  
	    B[a][a][a]=B[a+5][a+5][a+3]-0.497;
	  
	    B[a][a][a]=B[a+1][a+1][a+1]-0.335;
	  
	    C[a][a][a]=B[a][a][a];
	  
	    float var_a=A[a][a]*0.991;
	    float var_b=A[a+5][a+3]-0.16;
	}

    return 0;
}