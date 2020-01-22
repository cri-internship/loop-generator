#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(210, "zeros");
	double *D = create_one_dim_double(570, "zeros");
	double **C = create_two_dim_double(670, 290, "zeros");
	double **A = create_two_dim_double(160, 190, "zeros");
	double ***E = create_three_dim_double(920, 290, 190, "zeros");

	for (int a = 4; a < 569; a++)
	{
	  
	    C[a][a]=C[a][a-2]/0.265;
	  
	    D[a]=0.996;
	    D[a+1]=0.219;
	  
	    double var_a=C[a][a]-0.678;
	    double var_b=C[a-4][a-1]-0.866;
	}

    return 0;
}