#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(980, 100, "ones");
	int ***B = create_three_dim_int(570, 350, 150, "ones");

	for (int a = 5; a < 565; a++)
	{
	  
	    A[a][a]=A[a][a-5]*B[a][a][a];
	  
	    B[a][a][a]=B[a-3][a][a-5]-42;
	  
	    B[a][a][a]=B[a+5][a+5][a+3]/9;
	  
	    A[a][a]=B[a][a][a]-A[a][a];
	    B[a][a][a]=B[a][a-4][a-5]+A[a][a];
	  
	    int var_a=B[a][a][a]+14;
	    int var_b=B[a-2][a][a]-3;
	}

    return 0;
}