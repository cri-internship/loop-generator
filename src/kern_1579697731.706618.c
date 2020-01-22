#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(910, 980, 80, "zeros");
	float ***C = create_three_dim_float(350, 680, 960, "zeros");
	float *B = create_one_dim_float(310, "zeros");

	for (int a = 4; a < 345; a++)
	{
	  
	    C[a][a][a]=C[a-4][a-1][a]-B[a]*A[a][a][a];
	  
	    C[a][a][a]=C[a][a][a+5]-B[a];
	  
	    C[a][a][a]=C[a][a+1][a+2]+0.295;
	  
	    A[a][a][a]=C[a][a][a]/B[a];
	    C[a][a][a]=C[a-2][a][a-1]/B[a];
	}

    return 0;
}