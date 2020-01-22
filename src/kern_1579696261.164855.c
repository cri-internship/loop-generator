#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(990, "ones");
	float **E = create_two_dim_float(820, 780, "ones");
	float **D = create_two_dim_float(940, 570, "ones");
	float *A = create_one_dim_float(650, "ones");
	float ***B = create_three_dim_float(700, 480, 240, "ones");

	for (int a = 5; a < 650; a++)
	{
	  
	    E[a][a]=E[a][a-3]+0.758;
	  
	    B[a][a][a]=B[a-4][a][a-5]*0.552;
	  
	    float var_a=A[a]-0.514;
	    A[a]=0.905;
	  
	    A[a]=B[a][a][a]+C[a]/E[a][a];
	  
	    B[a][a][a]=C[a]-A[a]/D[a][a]*B[a][a][a]+E[a][a];
	    A[a]=C[a+1]/D[a][a]*B[a][a][a];
	}

    return 0;
}