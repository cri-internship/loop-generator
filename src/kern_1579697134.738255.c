#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(490, "random");
	int **B = create_two_dim_int(20, 220, "random");
	int ***A = create_three_dim_int(300, 350, 310, "random");

	for (int a = 4; a < 18; a++)
	{
	  
	    C[a]=C[a+3]/B[a][a]*A[a][a][a];
	  
	    A[a][a][a]=49;
	    A[a+5][a+5][a+3]=40;
	  
	    B[a][a]=43;
	    B[a][a-4]=A[a][a][a];
	  
	    A[a][a][a]=B[a][a]/A[a][a][a]*C[a];
	    C[a]=B[a+2][a]*A[a][a][a]/C[a];
	}

    return 0;
}