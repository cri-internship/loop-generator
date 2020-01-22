#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(510, 410, "zeros");
	double *A = create_one_dim_double(660, "zeros");
	double ***C = create_three_dim_double(590, 20, 820, "zeros");

	for (int a = 2; a < 505; a++)
	{
	  
	    C[a][a][a]=0.686;
	    C[a+5][a+1][a+3]=0.154;
	  
	    A[a]=0.048;
	    A[a-2]=0.328;
	  
	    C[a][a][a]=B[a][a]-C[a][a][a];
	    A[a]=B[a+5][a+4]*A[a];
	}

    return 0;
}