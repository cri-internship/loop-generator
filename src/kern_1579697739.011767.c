#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(40, 660, 50, "zeros");
	int *A = create_one_dim_int(690, "zeros");

	for (int d = 0; d < 45; d++)
	  for (int c = 0; c < 656; c++)
	    for (int b = 2; b < 40; b++)
	      for (int a = 2; a < 40; a++)
	      {
	        
	       A[a]=A[a-2]+10;
	        
	       A[a]=A[a+3]/23;
	        
	       B[a][b][c]=29;
	       B[a][b+4][c+5]=39;
	      }

    return 0;
}