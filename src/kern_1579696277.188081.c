#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(550, 790, 630, "zeros");
	int ***B = create_three_dim_int(830, 970, 160, "zeros");

	for (int a = 3; a < 545; a++)
	{
	  
	    B[a][a][a]=B[a][a-3][a-1]*31;
	  
	    A[a][a][a]=B[a][a][a]/37;
	    B[a][a][a]=B[a][a+3][a+3]*A[a][a][a];
	  
	    B[a][a][a]=B[a][a][a]/21;
	    B[a][a][a]=B[a+3][a+4][a+4]+A[a][a][a];
	  
	    int var_a=A[a][a][a]*22;
	    int var_b=A[a+2][a+3][a+5]+28;
	}

    return 0;
}