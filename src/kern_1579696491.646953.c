#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(590, "random");
	int **D = create_two_dim_int(1000, 710, "random");
	int **E = create_two_dim_int(550, 370, "random");
	int *A = create_one_dim_int(930, "random");
	int **C = create_two_dim_int(980, 440, "random");

	for (int a = 4; a < 590; a++)
	{
	  
	    B[a]=B[a-1]-A[a]+D[a][a]*C[a][a]/E[a][a];
	  
	    C[a][a]=B[a]*D[a][a]-A[a];
	    C[a-4][a-2]=E[a][a]+B[a]/4-A[a];
	}

    return 0;
}