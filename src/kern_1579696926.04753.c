#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(600, 990, "random");
	int **B = create_two_dim_int(550, 40, "random");
	int **C = create_two_dim_int(680, 420, "random");

	for (int a = 5; a < 550; a++)
	{
	  
	    C[a][a]=C[a-5][a-3]+50;
	  
	    B[a][a]=B[a-5][a]/23;
	  
	    C[a][a]=18;
	}

    return 0;
}