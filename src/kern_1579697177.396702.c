#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(800, 210, 30, "zeros");
	int **A = create_two_dim_int(750, 160, "zeros");

	for (int c = 4; c < 28; c++)
	  for (int b = 3; b < 158; b++)
	    for (int a = 4; a < 750; a++)
	    {
	      
	      B[a][b][c]=B[a][b-3][c-4]-47;
	      
	      A[a][b]=A[a][b-2]/B[a][b][c];
	      
	      B[a][b][c]=B[a-4][b-1][c-1]+A[a][b];
	      
	      A[a][b]=A[a][b+2]+5;
	    }

    return 0;
}