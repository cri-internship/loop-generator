#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(270, "zeros");
	int ***B = create_three_dim_int(730, 370, 310, "zeros");

	for (int a = 5; a < 266; a++)
	{
	  
	    B[a][a][a]=B[a][a-1][a-4]*24;
	  
	    B[a][a][a]=B[a+1][a+2][a]+A[a];
	  
	    B[a][a][a]=A[a]+13;
	    A[a]=A[a+4]/33;
	}

    return 0;
}