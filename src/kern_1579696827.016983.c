#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(530, 450, 720, "zeros");

	for (int d = 2; d < 720; d++)
	  for (int c = 1; c < 450; c++)
	    for (int b = 0; b < 530; b++)
	      for (int a = 0; a < 530; a++)
	      {
	        
	       A[a][b][c]=A[a][b-1][c-2]+0.004;
	      }

    return 0;
}