#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(850, 40, 610, "random");
	int **A = create_two_dim_int(450, 960, "random");

	for (int a = 5; a < 445; a++)
	{
	  
	    A[a][a]=A[a-5][a-5]*14;
	  
	    A[a][a]=B[a][a][a];
	  
	    B[a][a][a]=47;
	    B[a-4][a-1][a-4]=15;
	  
	    A[a][a]=A[a][a]/B[a][a][a];
	    B[a][a][a]=A[a-3][a-5]/36;
	}

    return 0;
}