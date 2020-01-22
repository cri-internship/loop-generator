#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(870, 630, 680, "random");
	double ***A = create_three_dim_double(700, 220, 220, "random");

	for (int d = 3; d < 220; d++)
	  for (int c = 3; c < 220; c++)
	    for (int b = 5; b < 700; b++)
	      for (int a = 5; a < 700; a++)
	      {
	        
	       A[a][b][c]=A[a-1][b-3][c]-0.904;
	        
	       B[a][b][c]=B[a-5][b][c-3]/0.661;
	      }

    return 0;
}