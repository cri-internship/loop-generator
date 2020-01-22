#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(400, 760, 820, "ones");
	double ***B = create_three_dim_double(610, 140, 140, "ones");
	double **A = create_two_dim_double(320, 240, "ones");
	double *D = create_one_dim_double(290, "ones");

	for (int a = 5; a < 288; a++)
	{
	  
	    A[a][a]=A[a-5][a]-C[a][a][a]+0.944;
	  
	    D[a]=D[a-3]*A[a][a];
	  
	    B[a][a][a]=B[a+4][a+4][a+1]-D[a];
	  
	    D[a]=0.498;
	  
	    C[a][a][a]=A[a][a]/D[a]*B[a][a][a];
	    C[a+3][a+2][a+5]=A[a][a];
	}

    return 0;
}