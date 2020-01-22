#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(60, 580, 980, "zeros");
	int ***B = create_three_dim_int(90, 270, 130, "zeros");

	for (int a = 4; a < 60; a++)
	{
	  
	    B[a][a][a]=B[a][a-4][a-3]-37;
	  
	    A[a][a][a]=A[a-2][a-2][a-2]+20;
	}

    return 0;
}