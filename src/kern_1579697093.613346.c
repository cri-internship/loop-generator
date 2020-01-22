#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(900, 620, 20, "zeros");
	int *A = create_one_dim_int(470, "zeros");

	for (int c = 1; c < 20; c++)
	  for (int b = 2; b < 620; b++)
	    for (int a = 4; a < 469; a++)
	    {
	      
	      A[a]=A[a-2]-7;
	      
	      B[a][b][c]=B[a-4][b-2][c-1]-A[a];
	      
	      A[a]=A[a+1]/7;
	      
	      A[a]=38;
	    }

    return 0;
}