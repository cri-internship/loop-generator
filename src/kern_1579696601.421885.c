#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(540, 720, "zeros");
	int **A = create_two_dim_int(890, 830, "zeros");

	for (int a = 5; a < 540; a++)
	{
	  
	    B[a][a]=B[a-2][a-4]-49;
	  
	    A[a][a]=A[a+3][a+3]-35;
	  
	    B[a][a]=40;
	  
	    B[a][a]=A[a][a]/B[a][a];
	    A[a][a]=A[a][a+3]/B[a][a];
	}

    return 0;
}