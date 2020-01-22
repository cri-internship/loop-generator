#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(510, 590, "zeros");
	double ***A = create_three_dim_double(40, 980, 590, "zeros");

	for (int c = 3; c < 590; c++)
	  for (int b = 3; b < 590; b++)
	    for (int a = 5; a < 40; a++)
	    {
	      
	      A[a][b][c]=A[a][b-1][c-2]+0.424;
	      
	      B[a][b]=B[a-5][b-2]*0.728;
	      
	      A[a][b][c]=A[a-3][b-1][c-2]-0.897;
	      
	      A[a][b][c]=A[a][b-2][c-3]/0.437;
	    }

    return 0;
}