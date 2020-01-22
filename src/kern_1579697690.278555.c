#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(940, 240, 650, "zeros");
	int *C = create_one_dim_int(670, "zeros");
	int **B = create_two_dim_int(670, 670, "zeros");
	int ***D = create_three_dim_int(310, 960, 480, "zeros");

	for (int a = 5; a < 305; a++)
	{
	  
	    D[a][a][a]=D[a-4][a][a-5]+27;
	  
	    B[a][a]=B[a][a+4]/15;
	  
	    B[a][a]=49;
	  
	    C[a]=D[a][a][a];
	    C[a]=B[a][a];
	  
	    int var_a=D[a][a][a]/3;
	    int var_b=D[a][a+1][a+5]+47;
	}

    return 0;
}