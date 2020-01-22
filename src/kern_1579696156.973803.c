#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(550, 670, 440, "zeros");
	int ***B = create_three_dim_int(520, 430, 800, "zeros");
	int **C = create_two_dim_int(20, 250, "zeros");

	for (int c = 2; c < 440; c++)
	  for (int b = 1; b < 427; b++)
	    for (int a = 5; a < 517; a++)
	    {
	      
	      A[a][b][c]=A[a-5][b-1][c-2]/C[a][b];
	      
	      B[a][b][c]=7;
	      B[a+3][b+3][c+2]=21;
	    }

    return 0;
}