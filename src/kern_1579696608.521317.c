#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***D = create_three_dim_float(660, 30, 580, "zeros");
	float **C = create_two_dim_float(910, 680, "zeros");
	float ***B = create_three_dim_float(460, 710, 220, "zeros");
	float ***A = create_three_dim_float(260, 140, 400, "zeros");

	for (int a = 0; a < 655; a++)
	{
	  
	    D[a][a][a]=A[a][a][a]/C[a][a]+B[a][a][a];
	    D[a+5][a+4][a+4]=A[a][a][a]+B[a][a][a];
	  
	    D[a][a][a]=0.071+A[a][a][a]-C[a][a];
	}

    return 0;
}