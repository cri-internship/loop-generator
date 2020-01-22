#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(370, 310, 810, "zeros");
	double ***B = create_three_dim_double(320, 330, 540, "zeros");

	for (int c = 3; c < 540; c++)
	  for (int b = 3; b < 310; b++)
	    for (int a = 3; a < 315; a++)
	    {
	      
	      A[a][b][c]=A[a][b-2][c-3]/B[a][b][c];
	      
	      B[a][b][c]=B[a+5][b][c]-0.208;
	      
	      A[a][b][c]=A[a][b][c]-0.44;
	      B[a][b][c]=A[a-3][b-3][c-2]/0.187;
	    }

    return 0;
}