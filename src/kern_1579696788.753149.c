#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(310, "ones");
	int **A = create_two_dim_int(340, 510, "ones");

	for (int c = 5; c < 505; c++)
	  for (int b = 3; b < 308; b++)
	    for (int a = 3; a < 308; a++)
	    {
	      
	      A[a][b]=A[a][b-1]+10;
	      
	      B[a]=B[a-1]-A[a][b];
	      
	      A[a][b]=A[a+4][b+5]*B[a];
	      
	      B[a]=A[a][b];
	      
	      int var_a=A[a][b]/9;
	      int var_b=A[a+1][b+2]+8;
	    }

    return 0;
}