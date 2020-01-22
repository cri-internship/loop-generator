#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(640, 550, "zeros");
	int **A = create_two_dim_int(960, 470, "zeros");

	for (int d = 1; d < 470; d++)
	  for (int c = 1; c < 636; c++)
	    for (int b = 1; b < 636; b++)
	      for (int a = 1; a < 636; a++)
	      {
	        
	       B[a][b]=B[a+3][b]*47;
	        
	       B[a][b]=B[a+4][b]*44;
	        
	       A[a][b]=13;
	       A[a-1][b-1]=22;
	      }

    return 0;
}