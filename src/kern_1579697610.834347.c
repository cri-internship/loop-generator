#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(550, 350, 710, "zeros");
	int *A = create_one_dim_int(660, "zeros");

	for (int a = 3; a < 545; a++)
	{
	  
	    A[a]=A[a-3]/B[a][a][a];
	  
	    B[a][a][a]=B[a+1][a+1][a+2]/10;
	  
	    A[a]=A[a+5]*6;
	  
	    B[a][a][a]=6;
	  
	    int var_a=B[a][a][a]+49;
	    int var_b=B[a][a+5][a+3]+22;
	  
	    int var_c=B[a][a][a]/46;
	    int var_d=B[a+2][a+5][a+2]/47;
	}

    return 0;
}