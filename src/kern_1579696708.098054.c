#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(860, 680, 560, "zeros");
	int *A = create_one_dim_int(310, "zeros");

	for (int a = 5; a < 305; a++)
	{
	  
	    A[a]=A[a-3]*47;
	  
	    A[a]=A[a-4]-20;
	  
	    B[a][a][a]=B[a-1][a][a-5]*35;
	  
	    float  var_a=A[a]+13;
	  
	    B[a][a][a]=B[a-4][a-2][a]+19;
	  
	    B[a][a][a]=A[a]-B[a][a][a];
	    A[a]=A[a+5]-25;
	}

    return 0;
}