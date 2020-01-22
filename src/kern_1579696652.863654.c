#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(300, 910, "zeros");
	int **A = create_two_dim_int(300, 130, "zeros");

	for (int d = 4; d < 130; d++)
	  for (int c = 4; c < 300; c++)
	    for (int b = 4; b < 300; b++)
	      for (int a = 4; a < 300; a++)
	      {
	        
	       A[a][b]=A[a-4][b-4]+35;
	        
	       A[a][b]=30;
	        
	       A[a][b]=B[a][b]*A[a][b];
	       B[a][b]=B[a-3][b-1]*A[a][b];
	      }

    return 0;
}