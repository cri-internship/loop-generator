#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(310, "random");
	int ***A = create_three_dim_int(230, 980, 470, "random");
	int **B = create_two_dim_int(760, 610, "random");

	for (int a = 0; a < 226; a++)
	{
	  
	    A[a][a][a]=A[a+2][a+1][a+2]/5+B[a][a];
	  
	    A[a][a][a]=A[a+2][a+4][a+2]/36;
	  
	    B[a][a]=38;
	    B[a+3][a+4]=22;
	}

    return 0;
}