#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(550, 160, 90, "random");
	int **A = create_two_dim_int(510, 900, "random");

	for (int a = 5; a < 510; a++)
	{
	  
	    B[a][a][a]=B[a][a-2][a-5]+30;
	  
	    A[a][a]=A[a-3][a-2]+B[a][a][a];
	  
	    A[a][a]=A[a-2][a-4]*42;
	  
	    B[a][a][a]=46;
	  
	    int var_a=B[a][a][a]+44;
	    int var_b=B[a][a][a-4]+0;
	  
	    B[a][a][a]=B[a][a][a]-10;
	    A[a][a]=B[a][a-1][a-1]-A[a][a];
	}

    return 0;
}