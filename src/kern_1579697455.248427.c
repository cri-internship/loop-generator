#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(250, 90, 720, "zeros");
	float ***A = create_three_dim_float(850, 240, 540, "zeros");
	float ***C = create_three_dim_float(970, 540, 530, "zeros");

	for (int a = 5; a < 250; a++)
	{
	  
	    B[a][a][a]=B[a-1][a-5][a-4]/C[a][a][a]*A[a][a][a];
	  
	    float var_a=C[a][a][a]*0.005;
	    float var_b=C[a-2][a-4][a-1]*0.318;
	}

    return 0;
}