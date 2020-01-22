#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(930, 680, 600, "ones");
	int ***B = create_three_dim_int(60, 140, 520, "ones");

	for (int a = 5; a < 55; a++)
	{
	  
	    B[a][a][a]=B[a][a+4][a+5]+3;
	  
	    B[a][a][a]=B[a][a+5][a+2]-A[a][a][a];
	  
	    B[a][a][a]=B[a][a][a]+50;
	    A[a][a][a]=B[a-1][a-1][a-5]-A[a][a][a];
	}

    return 0;
}