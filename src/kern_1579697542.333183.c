#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(300, "ones");
	int *A = create_one_dim_int(420, "ones");
	int ***D = create_three_dim_int(630, 10, 600, "ones");
	int **B = create_two_dim_int(680, 330, "ones");

	for (int a = 5; a < 300; a++)
	{
	  
	    B[a][a]=B[a-2][a-5]+8;
	  
	    B[a][a]=B[a-3][a-3]-1;
	  
	    C[a]=25;
	    C[a-3]=39;
	  
	    int var_a=D[a][a][a]+40;
	    int var_b=D[a-5][a-3][a-4]+9;
	}

    return 0;
}