#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(190, 650, 120, "zeros");
	double **B = create_two_dim_double(640, 60, "zeros");
	double ***C = create_three_dim_double(430, 170, 130, "zeros");
	double **D = create_two_dim_double(400, 530, "zeros");

	for (int a = 5; a < 190; a++)
	{
	  
	    A[a][a][a]=A[a-1][a-4][a-3]-0.699;
	  
	    C[a][a][a]=C[a-1][a-1][a-3]*0.1;
	  
	    B[a][a]=B[a+3][a]/0.108;
	  
	    A[a][a][a]=B[a][a]-A[a][a][a];
	    B[a][a]=B[a-2][a-5]*C[a][a][a]-D[a][a];
	  
	    C[a][a][a]=C[a][a][a]+0.659;
	    D[a][a]=C[a+5][a+4][a+5]*B[a][a]-0.178/A[a][a][a];
	  
	    A[a][a][a]=C[a][a][a]*D[a][a]/0.101;
	    D[a][a]=C[a-4][a-5][a-4]/A[a][a][a];
	}

    return 0;
}