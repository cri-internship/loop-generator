#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(100, 420, "zeros");
	int **A = create_two_dim_int(770, 890, "zeros");

	for (int d = 4; d < 418; d++)
	  for (int c = 3; c < 98; c++)
	    for (int b = 3; b < 98; b++)
	      for (int a = 3; a < 98; a++)
	      {
	        
	       B[a][b]=B[a-3][b]+23;
	        
	       A[a][b]=A[a-2][b-3]*26;
	        
	       A[a][b]=A[a+2][b]-19;
	        
	       B[a][b]=49;
	      }

    return 0;
}