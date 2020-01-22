#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(760, 710, "ones");
	int **E = create_two_dim_int(130, 440, "ones");
	int **D = create_two_dim_int(690, 750, "ones");
	int **B = create_two_dim_int(190, 550, "ones");
	int **C = create_two_dim_int(120, 960, "ones");

	for (int a = 1; a < 120; a++)
	{
	  
	    C[a][a]=C[a][a-1]*D[a][a]+A[a][a];
	  
	    A[a][a]=A[a][a+5]/25;
	  
	    B[a][a]=B[a+5][a]/6;
	}

    return 0;
}