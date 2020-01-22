#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(970, 790, 120, "random");
	float **B = create_two_dim_float(130, 570, "random");
	float **E = create_two_dim_float(70, 160, "random");
	float ***D = create_three_dim_float(230, 950, 420, "random");
	float ***C = create_three_dim_float(670, 590, 510, "random");

	for (int a = 3; a < 125; a++)
	{
	  
	    A[a][a][a]=A[a-3][a][a]+0.226;
	  
	    B[a][a]=B[a+5][a+3]-0.059;
	  
	    A[a][a][a]=A[a+3][a][a]*B[a][a]-C[a][a][a];
	  
	    float var_a=D[a][a][a]-0.884;
	    float var_b=D[a+4][a+1][a+5]*0.399;
	}

    return 0;
}