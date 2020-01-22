#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(920, 930, 940, "ones");
	int *E = create_one_dim_int(250, "ones");
	int ***A = create_three_dim_int(420, 240, 820, "ones");
	int **B = create_two_dim_int(260, 150, "ones");
	int **D = create_two_dim_int(190, 650, "ones");

	for (int a = 0; a < 259; a++)
	{
	  
	    C[a][a][a]=C[a+4][a][a+2]-16;
	  
	    B[a][a]=B[a][a]*C[a][a][a];
	    C[a][a][a]=B[a][a+1]+E[a]/A[a][a][a]*D[a][a];
	}

    return 0;
}