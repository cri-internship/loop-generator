#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(750, 160, 320, "random");
	int **B = create_two_dim_int(690, 580, "random");

	for (int a = 5; a < 746; a++)
	{
	  
	    A[a][a][a]=A[a][a-3][a-1]+27;
	  
	    A[a][a][a]=A[a+4][a+1][a+3]*B[a][a];
	  
	    int var_a=A[a][a][a]+36;
	    int var_b=A[a-1][a-1][a-5]+3;
	}

    return 0;
}