#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(550, "zeros");
	double **D = create_two_dim_double(910, 970, "zeros");
	double ***B = create_three_dim_double(930, 680, 230, "zeros");
	double *E = create_one_dim_double(980, "zeros");
	double **C = create_two_dim_double(180, 140, "zeros");

	for (int a = 5; a < 180; a++)
	{
	  
	    A[a]=B[a][a][a]+C[a][a]-D[a][a];
	    E[a]=A[a]*E[a]-B[a][a][a]+E[a]/D[a][a];
	  
	    A[a]=A[a-3]/C[a][a]*E[a]+B[a][a][a]-D[a][a];
	  
	    B[a][a][a]=B[a][a-2][a-2]-0.9;
	  
	    C[a][a]=A[a];
	    C[a-5][a-1]=0.269;
	  
	    D[a][a]=0.255;
	    D[a+2][a+5]=0.396;
	}

    return 0;
}