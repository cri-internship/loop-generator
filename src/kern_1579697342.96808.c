#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(620, "zeros");
	double **C = create_two_dim_double(460, 700, "zeros");
	double ***B = create_three_dim_double(710, 900, 960, "zeros");

	for (int a = 3; a < 455; a++)
	{
	  
	    B[a][a][a]=B[a][a-2][a-2]/C[a][a];
	  
	    B[a][a][a]=B[a-2][a][a]-0.227;
	  
	    C[a][a]=C[a][a+2]/0.649;
	  
	    C[a][a]=C[a+4][a+2]-0.815;
	  
	    double var_a=C[a][a]*0.235;
	    double var_b=C[a+2][a]*0.374;
	}

    return 0;
}