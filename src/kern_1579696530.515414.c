#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(180, 630, "random");
	int ***A = create_three_dim_int(820, 70, 560, "random");
	int **B = create_two_dim_int(1000, 750, "random");

	for (int a = 2; a < 178; a++)
	{
	  
	    C[a][a]=32;
	    C[a+1][a+2]=27;
	  
	    A[a][a][a]=30;
	    A[a-2][a-1][a-1]=6;
	}

    return 0;
}