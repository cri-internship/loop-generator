#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(750, 130, 330, "ones");
	int **A = create_two_dim_int(770, 300, "ones");
	int ***C = create_three_dim_int(300, 480, 220, "ones");

	for (int a = 5; a < 296; a++)
	{
	  
	    A[a][a]=A[a-3][a-5]*C[a][a][a]+B[a][a][a];
	  
	    B[a][a][a]=A[a][a]/C[a][a][a];
	    B[a+4][a][a]=A[a][a];
	  
	    C[a][a][a]=8;
	    C[a+1][a+4][a+1]=23;
	  
	    C[a][a][a]=B[a][a][a]/A[a][a];
	}

    return 0;
}