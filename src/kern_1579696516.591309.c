#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(780, 320, 320, "ones");
	int **C = create_two_dim_int(930, 850, "ones");
	int **A = create_two_dim_int(360, 330, "ones");

	for (int a = 5; a < 780; a++)
	{
	  
	    C[a][a]=C[a-1][a-2]+B[a][a][a];
	  
	    C[a][a]=C[a][a+4]+A[a][a]*A[a][a];
	  
	    C[a][a]=B[a][a][a]*C[a][a]-A[a][a];
	    A[a][a]=B[a-5][a][a]*A[a][a]-C[a][a];
	}

    return 0;
}