#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(440, 200, 140, "zeros");
	int **B = create_two_dim_int(330, 730, "zeros");

	for (int a = 5; a < 330; a++)
	{
	  
	    B[a][a]=B[a-5][a-5]+7;
	  
	    A[a][a][a]=19;
	    A[a-4][a-4][a]=5;
	  
	    B[a][a]=A[a][a][a]*B[a][a];
	    A[a][a][a]=A[a][a-5][a-2]/B[a][a];
	}

    return 0;
}