#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(290, "zeros");
	int ***B = create_three_dim_int(600, 160, 780, "zeros");

	for (int c = 0; c < 779; c++)
	  for (int b = 0; b < 155; b++)
	    for (int a = 1; a < 285; a++)
	    {
	      
	      A[a]=A[a-1]*41;
	      
	      B[a][b][c]=B[a+1][b+5][c+1]-A[a];
	      
	      A[a]=A[a+5]-B[a][b][c];
	    }

    return 0;
}