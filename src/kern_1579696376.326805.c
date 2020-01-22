#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(20, "ones");
	int **A = create_two_dim_int(550, 160, "ones");

	for (int c = 0; c < 159; c++)
	  for (int b = 0; b < 550; b++)
	    for (int a = 0; a < 550; a++)
	    {
	      
	      A[a][b]=44;
	      A[a][b+1]=11;
	    }

    return 0;
}