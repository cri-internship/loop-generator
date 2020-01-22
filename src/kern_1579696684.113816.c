#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(140, 680, 570, "ones");
	int *B = create_one_dim_int(970, "ones");

	for (int a = 3; a < 136; a++)
	{
	  
	    B[a]=B[a-2]*21;
	  
	    A[a][a][a]=A[a-2][a-3][a]/6;
	  
	    A[a][a][a]=A[a+4][a][a+3]+B[a];
	  
	    B[a]=B[a+1]-20;
	}

    return 0;
}