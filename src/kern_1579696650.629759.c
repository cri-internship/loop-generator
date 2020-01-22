#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(80, 280, 640, "zeros");
	int *B = create_one_dim_int(990, "zeros");

	for (int a = 1; a < 75; a++)
	{
	  
	    B[a]=B[a-1]-22;
	  
	    B[a]=B[a+5]+46;
	  
	    A[a][a][a]=B[a];
	    A[a+5][a][a+5]=49;
	  
	    A[a][a][a]=1;
	  
	    B[a]=B[a]/A[a][a][a];
	    A[a][a][a]=B[a+1]-7;
	}

    return 0;
}