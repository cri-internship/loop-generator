#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(460, 860, "zeros");
	double ***B = create_three_dim_double(330, 720, 140, "zeros");
	double ***A = create_three_dim_double(450, 470, 600, "zeros");

	for (int a = 1; a < 330; a++)
	{
	  
	    B[a][a][a]=B[a-1][a][a]+0.573;
	  
	    B[a][a][a]=C[a][a]+B[a][a][a]/0.782;
	    C[a][a]=C[a+3][a+3]*B[a][a][a];
	}

    return 0;
}