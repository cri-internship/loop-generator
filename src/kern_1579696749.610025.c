#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(500, "ones");
	int ***B = create_three_dim_int(280, 420, 770, "ones");

	for (int c = 2; c < 500; c++)
	  for (int b = 2; b < 500; b++)
	    for (int a = 2; a < 500; a++)
	    {
	      
	      A[a]=B[a][b][c];
	      A[a-2]=B[a][b][c];
	    }

    return 0;
}