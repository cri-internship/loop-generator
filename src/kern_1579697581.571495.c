#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(690, 750, 500, "ones");
	double ***A = create_three_dim_double(830, 130, 990, "ones");

	for (int d = 4; d < 500; d++)
	  for (int c = 5; c < 130; c++)
	    for (int b = 5; b < 690; b++)
	      for (int a = 5; a < 690; a++)
	      {
	        
	       B[a][b][c]=B[a-2][b-3][c-3]-A[a][b][c];
	        
	       B[a][b][c]=B[a-1][b][c-3]-A[a][b][c];
	        
	       A[a][b][c]=A[a-2][b-5][c-4]+0.625;
	        
	       A[a][b][c]=B[a][b][c];
	      }

    return 0;
}