#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(240, 740, 140, "ones");
	float *A = create_one_dim_float(600, "ones");

	for (int a = 5; a < 236; a++)
	{
	  
	    A[a]=0.132;
	    A[a-4]=0.675;
	  
	    A[a]=B[a][a][a];
	  
	    B[a][a][a]=A[a];
	    B[a][a-1][a]=A[a];
	  
	    float var_a=B[a][a][a]+0.813;
	    float var_b=B[a-4][a][a-5]-0.411;
	  
	    B[a][a][a]=A[a]*B[a][a][a];
	    A[a]=A[a+1]*B[a][a][a];
	  
	    float var_c=B[a][a][a]/0.961;
	    float var_d=B[a+4][a+4][a+2]*0.175;
	  
	    A[a]=A[a]-B[a][a][a];
	    A[a]=A[a+2]-B[a][a][a];
	}

    return 0;
}