#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *E = create_one_dim_double(880, "zeros");
	double *B = create_one_dim_double(930, "zeros");
	double **C = create_two_dim_double(430, 710, "zeros");
	double ***A = create_three_dim_double(710, 460, 750, "zeros");
	double *D = create_one_dim_double(40, "zeros");

	for (int a = 2; a < 39; a++)
	{
	  
	    C[a][a]=C[a-2][a-1]+0.433;
	  
	    D[a]=D[a+1]/B[a]+A[a][a][a];
	  
	    B[a]=B[a+5]*0.535;
	  
	    D[a]=A[a][a][a]*E[a]-0.169;
	    E[a]=A[a+5][a+5][a+5]+C[a][a]/C[a][a];
	}

    return 0;
}