#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(400, 970, 890, "zeros");
	int **B = create_two_dim_int(680, 280, "zeros");

	for (int a = 5; a < 395; a++)
	{
	  
	    A[a][a][a]=A[a+1][a+2][a+4]/48;
	  
	    B[a][a]=23;
	    B[a+2][a+2]=46;
	  
	    B[a][a]=8;
	  
	    A[a][a][a]=A[a][a][a]*B[a][a];
	    B[a][a]=A[a+3][a+5][a+1]+2;
	  
	    int var_a=B[a][a]*34;
	    int var_b=B[a+5][a+5]/30;
	}

    return 0;
}