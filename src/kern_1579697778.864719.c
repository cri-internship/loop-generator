#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(450, "zeros");
	int ***D = create_three_dim_int(770, 310, 780, "zeros");
	int *B = create_one_dim_int(30, "zeros");
	int *A = create_one_dim_int(500, "zeros");

	for (int a = 5; a < 30; a++)
	{
	  
	    C[a]=C[a+5]/1-A[a];
	  
	    A[a]=35;
	    A[a-5]=30;
	  
	    B[a]=D[a][a][a]/C[a];
	    B[a-1]=D[a][a][a]+C[a]/37;
	}

    return 0;
}