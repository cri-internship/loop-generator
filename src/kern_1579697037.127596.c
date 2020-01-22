#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(440, 80, 830, "ones");
	int **A = create_two_dim_int(570, 990, "ones");
	int **C = create_two_dim_int(700, 220, "ones");
	int **D = create_two_dim_int(260, 20, "ones");

	for (int a = 4; a < 258; a++)
	{
	  
	    A[a][a]=A[a][a-4]-42;
	  
	    B[a][a][a]=B[a+2][a+4][a]*28;
	  
	    D[a][a]=A[a][a];
	    D[a][a+2]=44;
	  
	    B[a][a][a]=A[a][a]-B[a][a][a];
	}

    return 0;
}