#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *D = create_one_dim_int(290, "zeros");
	int **B = create_two_dim_int(820, 20, "zeros");
	int *C = create_one_dim_int(550, "zeros");
	int **A = create_two_dim_int(750, 770, "zeros");

	for (int a = 5; a < 548; a++)
	{
	  
	    B[a][a]=B[a-3][a-1]*C[a];
	  
	    B[a][a]=B[a-5][a-5]*50;
	  
	    C[a]=C[a+2]-20;
	}

    return 0;
}