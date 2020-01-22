#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***D = create_three_dim_int(430, 160, 970, "ones");
	int *C = create_one_dim_int(360, "ones");
	int **E = create_two_dim_int(680, 720, "ones");
	int **B = create_two_dim_int(310, 800, "ones");
	int ***A = create_three_dim_int(150, 400, 950, "ones");

	for (int a = 5; a < 146; a++)
	{
	  
	    D[a][a][a]=D[a-2][a-5][a-1]/C[a]*A[a][a][a]+36-E[a][a];
	  
	    C[a]=C[a+2]-D[a][a][a]/D[a][a][a]+A[a][a][a]*B[a][a];
	  
	    E[a][a]=E[a+1][a]+D[a][a][a]/B[a][a]*C[a]-A[a][a][a];
	  
	    D[a][a][a]=A[a][a][a]-E[a][a]+B[a][a]*C[a];
	  
	    D[a][a][a]=E[a][a]-C[a]*B[a][a]+A[a][a][a]/D[a][a][a];
	    E[a][a]=E[a-2][a-4]*B[a][a]/D[a][a][a];
	  
	    A[a][a][a]=A[a][a][a]*D[a][a][a]+B[a][a]-E[a][a];
	    C[a]=A[a+4][a+1][a]/E[a][a]-D[a][a][a]+B[a][a]*C[a];
	  
	    B[a][a]=C[a]+A[a][a][a]/B[a][a]-E[a][a]*D[a][a][a];
	    E[a][a]=C[a+1]/E[a][a];
	}

    return 0;
}