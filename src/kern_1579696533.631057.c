#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(540, "ones");
	int ***B = create_three_dim_int(10, 150, 730, "ones");
	int **A = create_two_dim_int(290, 260, "ones");

	for (int a = 5; a < 10; a++)
	{
	  
	    B[a][a][a]=B[a-1][a-2][a-3]-13;
	  
	    B[a][a][a]=B[a-3][a-5][a]/16;
	  
	    A[a][a]=A[a][a+2]*4;
	  
	    C[a]=3;
	    C[a+5]=7;
	}

    return 0;
}