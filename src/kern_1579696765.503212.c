#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(70, "zeros");
	double *C = create_one_dim_double(970, "zeros");
	double **D = create_two_dim_double(550, 920, "zeros");
	double ***A = create_three_dim_double(890, 420, 330, "zeros");

	for (int a = 4; a < 67; a++)
	{
	  
	    B[a]=B[a-4]*0.898;
	  
	    A[a][a][a]=A[a-4][a-1][a-4]+C[a]-D[a][a]/B[a];
	  
	    B[a]=B[a-2]*A[a][a][a]-D[a][a]+C[a];
	  
	    C[a]=B[a]+A[a][a][a]*D[a][a]/C[a];
	    A[a][a][a]=B[a+3]/C[a]*D[a][a]+A[a][a][a];
	  
	    double var_a=B[a]-0.427;
	    double var_b=B[a+2]/0.59;
	}

    return 0;
}