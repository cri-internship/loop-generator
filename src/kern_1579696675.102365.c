#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(630, 80, 230, "zeros");
	int *A = create_one_dim_int(670, "zeros");
	int *D = create_one_dim_int(980, "zeros");
	int **C = create_two_dim_int(400, 240, "zeros");

	for (int a = 5; a < 398; a++)
	{
	  
	    A[a]=A[a-4]+D[a]*11;
	  
	    C[a][a]=C[a][a-4]+22;
	  
	    D[a]=D[a-1]*38;
	  
	    A[a]=D[a]*C[a][a]/A[a];
	  
	    C[a][a]=C[a][a+2]*9;
	  
	    D[a]=D[a+1]*A[a];
	  
	    B[a][a][a]=C[a][a]*A[a]/D[a];
	    D[a]=C[a-5][a-3]*15-D[a];
	}

    return 0;
}