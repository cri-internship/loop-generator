#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(670, "ones");
	int ***C = create_three_dim_int(970, 260, 240, "ones");
	int *B = create_one_dim_int(770, "ones");

	for (int a = 4; a < 670; a++)
	{
	  
	    A[a]=A[a-1]/49;
	  
	    A[a]=A[a-4]+31;
	  
	    C[a][a][a]=C[a+2][a+3][a+3]+B[a]*A[a];
	  
	    C[a][a][a]=C[a+3][a+5][a]+6;
	  
	    int var_a=B[a]-1;
	    int var_b=B[a-4]-14;
	  
	    int var_c=B[a]*10;
	    int var_d=B[a-1]/9;
	}

    return 0;
}