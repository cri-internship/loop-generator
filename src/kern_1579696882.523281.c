#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(780, 10, 850, "zeros");
	double *C = create_one_dim_double(420, "zeros");
	double *D = create_one_dim_double(20, "zeros");
	double **B = create_two_dim_double(740, 240, "zeros");
	double **E = create_two_dim_double(190, 20, "zeros");

	for (int a = 1; a < 189; a++)
	{
	  
	    B[a][a]=A[a][a][a]/E[a][a]*D[a];
	    B[a][a]=B[a][a]/0.641;
	  
	    E[a][a]=E[a-1][a]-B[a][a]*B[a][a]+A[a][a][a]/C[a];
	  
	    E[a][a]=0.645;
	  
	    A[a][a][a]=C[a]*A[a][a][a]/D[a];
	    D[a]=C[a+5]*D[a]+E[a][a]/A[a][a][a]-B[a][a];
	}

    return 0;
}