#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(220, 870, "zeros");
	int **B = create_two_dim_int(700, 100, "zeros");

	for (int a = 0; a < 695; a++)
	{
	  
	    B[a][a]=B[a+2][a+2]+48;
	  
	    B[a][a]=B[a+2][a+1]-37;
	}

    return 0;
}