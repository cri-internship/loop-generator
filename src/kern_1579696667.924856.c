#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(560, 660, "zeros");
	int ***A = create_three_dim_int(530, 600, 800, "zeros");

	for (int a = 5; a < 526; a++)
	{
	  
	    B[a][a]=B[a-2][a-4]+20;
	  
	    B[a][a]=B[a+1][a+2]+A[a][a][a];
	  
	    B[a][a]=B[a][a+4]/36;
	  
	    B[a][a]=B[a+4][a+2]/A[a][a][a];
	  
	    A[a][a][a]=B[a][a];
	    A[a+1][a+4][a+3]=31;
	  
	    A[a][a][a]=B[a][a]/9;
	    B[a][a]=B[a+5][a]/A[a][a][a];
	  
	    int var_a=A[a][a][a]-13;
	    int var_b=A[a-5][a-1][a-1]-10;
	}

    return 0;
}