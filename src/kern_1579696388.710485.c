#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **D = create_two_dim_int(840, 220, "ones");
	int *C = create_one_dim_int(120, "ones");
	int **E = create_two_dim_int(690, 340, "ones");
	int ***A = create_three_dim_int(60, 680, 650, "ones");
	int **B = create_two_dim_int(230, 110, "ones");

	for (int a = 5; a < 60; a++)
	{
	  
	    A[a][a][a]=A[a-5][a][a-5]+20;
	  
	    C[a]=14;
	    C[a-1]=34;
	}

    return 0;
}