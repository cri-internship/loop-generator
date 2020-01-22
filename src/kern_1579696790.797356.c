#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(110, "zeros");
	int **B = create_two_dim_int(930, 480, "zeros");

	for (int a = 5; a < 107; a++)
	{
	  
	    B[a][a]=B[a-4][a-5]*12;
	  
	    int var_a=A[a]-7;
	    A[a]=46;
	  
	    B[a][a]=B[a+5][a+1]/A[a];
	  
	    A[a]=A[a+1]-8;
	  
	    A[a]=A[a+3]/B[a][a];
	  
	    A[a]=A[a]-B[a][a];
	  
	    B[a][a]=B[a][a]*15;
	    A[a]=B[a-1][a-4]-A[a];
	}

    return 0;
}