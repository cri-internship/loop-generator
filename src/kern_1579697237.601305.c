#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(110, 600, "zeros");
	float **D = create_two_dim_float(170, 320, "zeros");
	float ***A = create_three_dim_float(640, 890, 870, "zeros");
	float **E = create_two_dim_float(560, 960, "zeros");
	float *C = create_one_dim_float(850, "zeros");

	for (int a = 3; a < 105; a++)
	{
	  
	    E[a][a]=E[a+2][a+3]/0.549;
	  
	    B[a][a]=B[a+5][a+5]+0.909;
	  
	    D[a][a]=D[a][a]/E[a][a]*B[a][a];
	    E[a][a]=D[a-1][a-3]+A[a][a][a]-C[a]*0.697;
	}

    return 0;
}