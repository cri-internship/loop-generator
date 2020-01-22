#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(120, 430, 720, "random");
	float ***C = create_three_dim_float(270, 860, 650, "random");
	float **B = create_two_dim_float(410, 670, "random");
	float ***D = create_three_dim_float(850, 250, 530, "random");

	for (int a = 3; a < 115; a++)
	{
	  
	    B[a][a]=B[a][a-3]/0.984;
	  
	    A[a][a][a]=A[a+4][a+2][a]/0.888;
	  
	    B[a][a]=B[a+5][a]/0.996;
	  
	    A[a][a][a]=A[a+2][a+2][a+4]/D[a][a][a]-B[a][a]*C[a][a][a];
	  
	    float var_a=A[a][a][a]*0.869;
	    float var_b=A[a+2][a+3][a+1]-0.38;
	}

    return 0;
}