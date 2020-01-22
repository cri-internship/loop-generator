#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(760, 950, 240, "ones");
	int ***A = create_three_dim_int(470, 570, 60, "ones");

	for (int a = 0; a < 465; a++)
	{
	  
	    A[a][a][a]=A[a][a+4][a+2]+B[a][a][a];
	  
	    int var_a=A[a][a][a]-7;
	    int var_b=A[a+5][a+3][a]/41;
	  
	    int var_c=A[a][a][a]/21;
	    int var_d=A[a][a+1][a+4]-50;
	}

    return 0;
}