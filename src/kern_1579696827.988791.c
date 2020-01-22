#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(900, 960, "zeros");
	int **A = create_two_dim_int(300, 490, "zeros");
	int *B = create_one_dim_int(170, "zeros");

	for (int a = 5; a < 170; a++)
	{
	  
	    int var_a=B[a]-17;
	    B[a]=3;
	  
	    C[a][a]=21;
	    C[a][a-1]=26;
	  
	    B[a]=A[a][a]+C[a][a];
	  
	    A[a][a]=27;
	    A[a-5][a-5]=15;
	}

    return 0;
}