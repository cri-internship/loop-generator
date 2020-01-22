#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(280, 230, "ones");
	float **B = create_two_dim_float(210, 910, "ones");
	float ***A = create_three_dim_float(790, 380, 80, "ones");

	for (int a = 3; a < 206; a++)
	{
	  
	    B[a][a]=B[a][a+4]/0.337;
	  
	    B[a][a]=C[a][a]-0.514;
	  
	    A[a][a][a]=0.722;
	    A[a+5][a+5][a+4]=0.572;
	  
	    float var_a=A[a][a][a]-0.912;
	    float var_b=A[a][a+2][a+2]/0.347;
	  
	    C[a][a]=B[a][a]-C[a][a];
	    A[a][a][a]=B[a-1][a-3]*A[a][a][a];
	}

    return 0;
}