#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(350, 400, "zeros");
	float ***C = create_three_dim_float(750, 550, 820, "zeros");
	float ***D = create_three_dim_float(300, 260, 610, "zeros");
	float ***A = create_three_dim_float(490, 190, 910, "zeros");

	for (int a = 2; a < 295; a++)
	{
	  
	    B[a][a]=B[a-2][a-2]*D[a][a][a];
	  
	    D[a][a][a]=D[a][a+4][a+5]-0.965;
	  
	    A[a][a][a]=A[a+5][a+2][a+3]*C[a][a][a]/B[a][a];
	  
	    D[a][a][a]=D[a+4][a+1][a+3]+0.485;
	  
	    C[a][a][a]=A[a][a][a]-A[a][a][a]*B[a][a];
	    C[a][a+3][a+2]=D[a][a][a]-B[a][a];
	  
	    A[a][a][a]=0.16;
	  
	    float var_a=D[a][a][a]/0.71;
	    float var_b=D[a-2][a][a-2]*0.272;
	}

    return 0;
}