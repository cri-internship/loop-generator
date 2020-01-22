#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(210, 770, 110, "ones");
	int *A = create_one_dim_int(650, "ones");
	int ***B = create_three_dim_int(400, 780, 40, "ones");
	int *D = create_one_dim_int(860, "ones");
	int *E = create_one_dim_int(230, "ones");

	for (int a = 5; a < 205; a++)
	{
	  
	    B[a][a][a]=B[a-4][a-5][a]-E[a]/A[a]*C[a][a][a]+D[a];
	  
	    A[a]=A[a+4]/B[a][a][a];
	  
	    C[a][a][a]=C[a+1][a][a+5]/34;
	  
	    C[a][a][a]=B[a][a][a]/D[a]-E[a];
	  
	    B[a][a][a]=C[a][a][a]*B[a][a][a];
	    A[a]=C[a+5][a+5][a+5]*B[a][a][a]-D[a]+A[a]/E[a];
	}

    return 0;
}