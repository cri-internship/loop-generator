#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(120, "zeros");
	int ***B = create_three_dim_int(570, 800, 420, "zeros");
	int **C = create_two_dim_int(870, 200, "zeros");

	for (int a = 3; a < 119; a++)
	{
	  
	    B[a][a][a]=B[a+2][a+1][a+1]/18;
	  
	    C[a][a]=C[a+3][a]+9;
	  
	    A[a]=A[a+1]*C[a][a]+B[a][a][a];
	  
	    A[a]=B[a][a][a]-C[a][a];
	  
	    C[a][a]=B[a][a][a]+A[a]-A[a];
	    A[a]=B[a-3][a-3][a]+8;
	}

    return 0;
}