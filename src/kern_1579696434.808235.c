#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(780, 730, 320, "ones");
	int *B = create_one_dim_int(190, "ones");

	for (int a = 3; a < 185; a++)
	{
	  
	    A[a][a][a]=A[a+1][a+4][a+3]+B[a];
	  
	    B[a]=A[a][a][a];
	    B[a+5]=A[a][a][a];
	  
	    A[a][a][a]=41;
	  
	    B[a]=A[a][a][a];
	  
	    A[a][a][a]=B[a]*A[a][a][a];
	    B[a]=B[a-1]/19;
	  
	    int var_a=A[a][a][a]-5;
	  
	    A[a][a][a]=A[a][a][a]-B[a];
	    B[a]=A[a+4][a+3][a+4]*35;
	}

    return 0;
}