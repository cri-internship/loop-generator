#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(890, 1000, 890, "ones");
	int **C = create_two_dim_int(580, 350, "ones");
	int *A = create_one_dim_int(340, "ones");
	int *D = create_one_dim_int(240, "ones");

	for (int a = 4; a < 240; a++)
	{
	  
	    D[a]=38*B[a][a][a];
	    D[a-4]=C[a][a]-27;
	  
	    A[a]=D[a]*C[a][a];
	    A[a-4]=C[a][a];
	  
	    B[a][a][a]=A[a]/D[a];
	    B[a-2][a][a-3]=C[a][a]*D[a];
	  
	    C[a][a]=A[a]/D[a]+C[a][a];
	    A[a]=A[a+4]/C[a][a];
	}

    return 0;
}