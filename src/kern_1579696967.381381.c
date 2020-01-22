#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(940, 310, "zeros");
	int ***A = create_three_dim_int(520, 150, 310, "zeros");
	int **B = create_two_dim_int(800, 240, "zeros");

	for (int a = 5; a < 520; a++)
	{
	  
	    A[a][a][a]=A[a-2][a][a-3]+B[a][a];
	  
	    C[a][a]=C[a+2][a+2]+A[a][a][a];
	  
	    B[a][a]=B[a+4][a+5]*C[a][a]-11;
	  
	    A[a][a][a]=43;
	  
	    B[a][a]=27;
	}

    return 0;
}