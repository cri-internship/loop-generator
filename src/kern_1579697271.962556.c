#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(210, 570, "ones");
	int **A = create_two_dim_int(1000, 490, "ones");

	for (int c = 3; c < 485; c++)
	  for (int b = 2; b < 997; b++)
	    for (int a = 2; a < 997; a++)
	    {
	      
	      A[a][b]=A[a-2][b-3]/B[a][b];
	      
	      A[a][b]=A[a+3][b+5]*6;
	      
	      A[a][b]=A[a+3][b+1]*43;
	    }

    return 0;
}