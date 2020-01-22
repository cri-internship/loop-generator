#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(260, 290, "zeros");

	for (int a = 5; a < 255; a++)
	{
	  
	    A[a][a]=A[a-3][a-5]-4;
	  
	    A[a][a]=A[a-5][a-1]*14;
	  
	    A[a][a]=A[a+1][a]+20;
	  
	    int var_a=A[a][a]+22;
	    int var_b=A[a-4][a-4]-16;
	  
	    int var_c=A[a][a]/12;
	    int var_d=A[a+5][a]/14;
	}

    return 0;
}