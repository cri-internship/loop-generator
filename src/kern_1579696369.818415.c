#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(310, "zeros");
	int **A = create_two_dim_int(300, 100, "zeros");

	for (int c = 4; c < 100; c++)
	  for (int b = 5; b < 295; b++)
	    for (int a = 5; a < 295; a++)
	    {
	      
	      A[a][b]=A[a-5][b-4]-50;
	      
	      A[a][b]=A[a+5][b]*B[a];
	      
	      int var_a=B[a]+20;
	    }

    return 0;
}