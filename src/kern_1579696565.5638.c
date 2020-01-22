#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(190, 310, "zeros");
	int **A = create_two_dim_int(760, 450, "zeros");
	int **C = create_two_dim_int(630, 900, "zeros");

	for (int d = 0; d < 310; d++)
	  for (int c = 5; c < 190; c++)
	    for (int b = 5; b < 190; b++)
	      for (int a = 5; a < 190; a++)
	      {
	        
	       B[a][b]=B[a-5][b]*C[a][b];
	        
	       A[a][b]=A[a+2][b]*B[a][b];
	      }

    return 0;
}