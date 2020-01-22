#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(130, 430, "zeros");
	int **D = create_two_dim_int(510, 200, "zeros");
	int ***B = create_three_dim_int(310, 770, 280, "zeros");
	int **A = create_two_dim_int(270, 750, "zeros");

	for (int a = 2; a < 270; a++)
	{
	  
	    A[a][a]=A[a][a-2]/B[a][a][a]+D[a][a];
	  
	    D[a][a]=49;
	    D[a+2][a+2]=12;
	}

    return 0;
}