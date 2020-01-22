#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(680, 80, "zeros");
	double **C = create_two_dim_double(170, 950, "zeros");
	double ***A = create_three_dim_double(160, 580, 650, "zeros");
	double *D = create_one_dim_double(590, "zeros");
	double **E = create_two_dim_double(420, 640, "zeros");

	for (int a = 5; a < 420; a++)
	{
	  
	    B[a][a]=B[a-4][a-2]+0.87;
	  
	    B[a][a]=B[a-2][a-3]*0.484;
	  
	    B[a][a]=B[a-3][a-1]+E[a][a];
	  
	    B[a][a]=B[a+2][a]+0.296;
	  
	    D[a]=B[a][a]-D[a]+A[a][a][a]*C[a][a]/A[a][a][a];
	    B[a][a]=B[a+4][a+5]/C[a][a]-E[a][a]+D[a]*A[a][a][a];
	  
	    C[a][a]=E[a][a]/B[a][a];
	    E[a][a]=E[a-5][a-2]-A[a][a][a]/B[a][a]*D[a]+C[a][a];
	}

    return 0;
}