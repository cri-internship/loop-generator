#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(580, "ones");
	int ***B = create_three_dim_int(840, 880, 550, "ones");

	for (int c = 2; c < 550; c++)
	  for (int b = 0; b < 880; b++)
	    for (int a = 0; a < 840; a++)
	    {
	      
	      A[a]=B[a][b][c]-1;
	      B[a][b][c]=B[a][b][c-2]+A[a];
	    }

    return 0;
}