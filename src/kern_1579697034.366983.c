#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(310, "zeros");
	int *D = create_one_dim_int(610, "zeros");
	int **B = create_two_dim_int(650, 950, "zeros");
	int *A = create_one_dim_int(710, "zeros");

	for (int a = 5; a < 605; a++)
	{
	  
	    B[a][a]=38;
	    B[a-1][a]=49;
	  
	    D[a]=B[a][a]-A[a];
	    D[a+5]=46/A[a];
	  
	    int var_a=B[a][a]*19;
	    int var_b=B[a-5][a-4]*42;
	}

    return 0;
}