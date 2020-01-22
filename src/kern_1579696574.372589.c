#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(660, 600, "zeros");
	double **C = create_two_dim_double(860, 340, "zeros");
	double ***A = create_three_dim_double(460, 300, 120, "zeros");
	double ***D = create_three_dim_double(880, 50, 290, "zeros");

	for (int a = 0; a < 860; a++)
	{
	  
	    double var_a=C[a][a]*0.041;
	    C[a][a]=0.367;
	  
	    D[a][a][a]=D[a+3][a+2][a+2]*0.383-B[a][a];
	}

    return 0;
}