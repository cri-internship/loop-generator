#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(510, 200, "ones");
	int ***B = create_three_dim_int(510, 540, 390, "ones");

	for (int c = 0; c < 388; c++)
	  for (int b = 1; b < 200; b++)
	    for (int a = 1; a < 506; a++)
	    {
	      
	      A[a][b]=A[a-1][b-1]/36;
	      
	      int var_a=B[a][b][c]*8;
	      B[a][b][c]=34;
	      
	      B[a][b][c]=B[a+4][b+1][c+2]*14;
	    }

    return 0;
}