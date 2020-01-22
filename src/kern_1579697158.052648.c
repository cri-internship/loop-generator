#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(100, 150, "ones");
	int **A = create_two_dim_int(330, 600, "ones");

	for (int a = 4; a < 95; a++)
	{
	  
	    B[a][a]=B[a-4][a]*17;
	  
	    B[a][a]=B[a-3][a-2]+30;
	  
	    A[a][a]=A[a][a+5]+24;
	  
	    A[a][a]=A[a+4][a+3]-B[a][a];
	  
	    int var_a=A[a][a]*27;
	    int var_b=A[a-4][a-3]/6;
	  
	    A[a][a]=B[a][a]*A[a][a];
	    B[a][a]=B[a+5][a+5]/17;
	}

    return 0;
}