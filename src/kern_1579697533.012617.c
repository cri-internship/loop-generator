#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(300, "random");
	int **B = create_two_dim_int(310, 880, "random");
	int **A = create_two_dim_int(510, 70, "random");
	int ***E = create_three_dim_int(570, 920, 440, "random");
	int *D = create_one_dim_int(30, "random");

	for (int a = 0; a < 29; a++)
	{
	  
	    B[a][a]=B[a+4][a+4]/49-A[a][a];
	  
	    C[a]=C[a+2]-40;
	  
	    D[a]=D[a+1]+B[a][a]*23/B[a][a];
	  
	    C[a]=C[a+3]+10*D[a]/A[a][a]-E[a][a][a];
	}

    return 0;
}