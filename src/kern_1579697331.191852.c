#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(790, 770, 510, "zeros");
	int ***B = create_three_dim_int(170, 770, 150, "zeros");

	for (int a = 5; a < 165; a++)
	{
	  
	    B[a][a][a]=B[a+2][a+5][a+3]/41;
	  
	    A[a][a][a]=A[a][a+3][a+2]/B[a][a][a];
	  
	    B[a][a][a]=9;
	}

    return 0;
}