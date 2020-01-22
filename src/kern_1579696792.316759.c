#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **D = create_two_dim_double(330, 510, "zeros");
	double ***C = create_three_dim_double(830, 940, 240, "zeros");
	double *E = create_one_dim_double(160, "zeros");
	double ***A = create_three_dim_double(620, 1000, 870, "zeros");
	double *B = create_one_dim_double(820, "zeros");

	for (int a = 0; a < 160; a++)
	{
	  
	    A[a][a][a]=A[a+3][a+1][a+3]/0.544;
	  
	    C[a][a][a]=E[a]*D[a][a];
	    C[a+4][a+5][a+5]=0.155*B[a];
	  
	    E[a]=C[a][a][a]*D[a][a]+0.681;
	    E[a]=0.677;
	  
	    C[a][a][a]=B[a]-C[a][a][a]*A[a][a][a]+D[a][a];
	  
	    A[a][a][a]=A[a][a][a]*B[a]/D[a][a];
	    D[a][a]=A[a+5][a+4][a+3]*D[a][a]-C[a][a][a]/B[a];
	}

    return 0;
}