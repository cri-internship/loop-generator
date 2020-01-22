#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(350, 260, "random");
	float **A = create_two_dim_float(290, 280, "random");
	float **C = create_two_dim_float(680, 160, "random");

	for (int a = 5; a < 285; a++)
	{
	  
	    C[a][a]=C[a-3][a-5]/B[a][a]+0.97;
	  
	    A[a][a]=C[a][a];
	    A[a+3][a+5]=0.44/B[a][a];
	  
	    float var_a=A[a][a]-0.188;
	    float var_b=A[a-5][a-4]-0.567;
	  
	    C[a][a]=C[a][a]-A[a][a];
	    A[a][a]=C[a+1][a+5]-A[a][a]+B[a][a];
	  
	    B[a][a]=B[a][a]+C[a][a]*A[a][a];
	    C[a][a]=B[a+4][a+3]+A[a][a]-C[a][a];
	}

    return 0;
}