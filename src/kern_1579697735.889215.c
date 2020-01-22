#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(720, 610, "zeros");
	int **B = create_two_dim_int(180, 230, "zeros");

	for (int a = 5; a < 175; a++)
	{
	  
	    B[a][a]=B[a-2][a-1]/A[a][a];
	  
	    B[a][a]=B[a+1][a+4]/A[a][a];
	  
	    B[a][a]=B[a+5][a+1]+A[a][a];
	  
	    A[a][a]=A[a+1][a+1]/B[a][a];
	  
	    A[a][a]=B[a][a];
	}

    return 0;
}