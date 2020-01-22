#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(510, "random");
	int **A = create_two_dim_int(160, 50, "random");
	int ***C = create_three_dim_int(780, 220, 460, "random");
	int *D = create_one_dim_int(90, "random");

	for (int a = 5; a < 158; a++)
	{
	  
	    C[a][a][a]=C[a-1][a-5][a-2]/13;
	  
	    C[a][a][a]=C[a-5][a-4][a-1]/45;
	  
	    A[a][a]=A[a+1][a+2]+18;
	  
	    B[a]=B[a+2]-16;
	  
	    A[a][a]=C[a][a][a]-34*B[a];
	  
	    C[a][a][a]=A[a][a]*D[a];
	    D[a]=A[a-2][a-4]/D[a];
	}

    return 0;
}