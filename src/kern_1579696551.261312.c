#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(160, "zeros");
	int **D = create_two_dim_int(880, 500, "zeros");
	int ***B = create_three_dim_int(950, 680, 730, "zeros");
	int *A = create_one_dim_int(350, "zeros");

	for (int a = 4; a < 156; a++)
	{
	  
	    C[a]=C[a+3]-46;
	  
	    B[a][a][a]=10;
	    B[a-4][a][a-1]=1;
	  
	    C[a]=38;
	  
	    A[a]=C[a];
	    A[a]=D[a][a];
	  
	    D[a][a]=27;
	    D[a+4][a+4]=38;
	  
	    B[a][a][a]=D[a][a]*C[a];
	  
	    B[a][a][a]=C[a]-A[a]*D[a][a];
	    C[a]=C[a+4]*D[a][a]/B[a][a][a]-A[a];
	}

    return 0;
}