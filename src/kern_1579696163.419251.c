#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(140, 530, "zeros");
	int ***C = create_three_dim_int(690, 410, 200, "zeros");
	int **B = create_two_dim_int(800, 490, "zeros");

	for (int a = 5; a < 140; a++)
	{
	  
	    C[a][a][a]=C[a-5][a-3][a-5]/33;
	  
	    B[a][a]=B[a-5][a]+A[a][a]/C[a][a][a];
	  
	    A[a][a]=A[a-2][a]/37;
	  
	    A[a][a]=A[a][a-3]*22;
	  
	    B[a][a]=13;
	  
	    C[a][a][a]=A[a][a]/B[a][a];
	    A[a][a]=A[a-5][a-4]+B[a][a]*C[a][a][a];
	}

    return 0;
}