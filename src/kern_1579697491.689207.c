#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(700, 530, "zeros");
	int **A = create_two_dim_int(980, 440, "zeros");

	for (int a = 5; a < 696; a++)
	{
	  
	    A[a][a]=A[a-5][a-2]-48;
	  
	    B[a][a]=B[a-1][a-4]/40;
	  
	    A[a][a]=A[a-5][a-3]+B[a][a];
	  
	    B[a][a]=15;
	  
	    int var_a=B[a][a]*32;
	    int var_b=B[a-2][a-1]-19;
	}

    return 0;
}