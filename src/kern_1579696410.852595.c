#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(150, 860, "ones");
	float ***B = create_three_dim_float(430, 820, 530, "ones");
	float ***A = create_three_dim_float(50, 300, 160, "ones");

	for (int a = 5; a < 46; a++)
	{
	  
	    A[a][a][a]=A[a+4][a+4][a+3]/0.304;
	  
	    C[a][a]=A[a][a][a]+C[a][a]-B[a][a][a];
	    B[a][a][a]=A[a][a+3][a+3]-C[a][a]*B[a][a][a];
	  
	    A[a][a][a]=C[a][a]-A[a][a][a]+A[a][a][a];
	    B[a][a][a]=C[a-3][a-5]-B[a][a][a]/A[a][a][a];
	}

    return 0;
}