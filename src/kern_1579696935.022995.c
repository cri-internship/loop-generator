#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(510, 690, 330, "random");
	double ***B = create_three_dim_double(450, 790, 870, "random");

	for (int c = 5; c < 329; c++)
	  for (int b = 5; b < 687; b++)
	    for (int a = 5; a < 446; a++)
	    {
	      
	      A[a][b][c]=A[a-5][b-3][c-2]+0.728;
	      
	      B[a][b][c]=B[a][b-3][c-5]-0.932;
	      
	      B[a][b][c]=B[a-4][b-4][c-1]*0.281;
	      
	      A[a][b][c]=A[a][b+3][c+1]/B[a][b][c];
	      
	      B[a][b][c]=B[a+1][b+2][c+5]/0.885;
	    }

    return 0;
}