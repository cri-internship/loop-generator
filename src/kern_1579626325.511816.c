#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(690, 610, 830, "ones");
	int ***A = create_three_dim_int(270, 110, 220, "ones");

	for (int a = 5; a < 267; a++)
	{
	  
	    A[a][a][a]=A[a+2][a+3][a+3]*42;
	  
	    B[a][a][a]=A[a][a][a];
	    B[a-4][a-5][a-5]=A[a][a][a];
	  
	    A[a][a][a]=B[a][a][a];
	  
	    B[a][a][a]=10;
	}

    return 0;
}