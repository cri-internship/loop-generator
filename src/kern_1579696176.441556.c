#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(100, 30, 690, "zeros");
	double **A = create_two_dim_double(150, 300, "zeros");

	for (int c = 5; c < 690; c++)
	  for (int b = 2; b < 30; b++)
	    for (int a = 4; a < 100; a++)
	    {
	      
	      B[a][b][c]=B[a-3][b-2][c-3]/0.74;
	      
	      A[a][b]=A[a-1][b-1]+0.449;
	      
	      B[a][b][c]=A[a][b];
	    }

    return 0;
}