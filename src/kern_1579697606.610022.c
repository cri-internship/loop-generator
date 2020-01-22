#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(370, "zeros");
	double ***A = create_three_dim_double(850, 350, 380, "zeros");
	double ***D = create_three_dim_double(50, 530, 950, "zeros");
	double ***C = create_three_dim_double(760, 350, 710, "zeros");

	for (int a = 3; a < 45; a++)
	{
	  
	    C[a][a][a]=C[a][a-3][a-1]*B[a]/D[a][a][a]-A[a][a][a];
	  
	    D[a][a][a]=D[a+5][a+5][a+1]-C[a][a][a];
	  
	    C[a][a][a]=C[a+1][a+4][a+5]*D[a][a][a];
	  
	    D[a][a][a]=B[a]/0.689;
	    C[a][a][a]=B[a+5]*0.041+A[a][a][a];
	  
	    A[a][a][a]=A[a][a][a]/0.527;
	    B[a]=A[a][a+4][a]*C[a][a][a]+B[a]-D[a][a][a];
	}

    return 0;
}