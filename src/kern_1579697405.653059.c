#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(260, 450, 720, "zeros");

	for (int c = 0; c < 715; c++)
	  for (int b = 0; b < 448; b++)
	    for (int a = 0; a < 255; a++)
	    {
	      
	      A[a][b][c]=A[a+3][b+1][c]*0.166;
	      
	      A[a][b][c]=A[a+3][b+2][c+5]*0.839;
	      
	      A[a][b][c]=A[a+5][b+1][c+5]+0.381;
	    }

    return 0;
}