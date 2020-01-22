#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(390, 600, "ones");
	int ***A = create_three_dim_int(580, 580, 660, "ones");

	for (int a = 5; a < 386; a++)
	{
	  
	    B[a][a]=B[a-2][a-3]/47;
	  
	    A[a][a][a]=A[a-5][a-2][a-2]-50;
	  
	    A[a][a][a]=A[a+1][a+4][a]/10;
	  
	    A[a][a][a]=A[a+2][a+3][a+3]+B[a][a];
	  
	    int var_a=B[a][a]-47;
	    int var_b=B[a+1][a+4]-2;
	}

    return 0;
}