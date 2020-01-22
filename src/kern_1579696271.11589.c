#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(660, 570, "ones");
	int **B = create_two_dim_int(770, 350, "ones");
	int *D = create_one_dim_int(190, "ones");
	int **C = create_two_dim_int(210, 760, "ones");

	for (int d = 1; d < 570; d++)
	  for (int c = 2; c < 210; c++)
	    for (int b = 2; b < 210; b++)
	      for (int a = 2; a < 210; a++)
	      {
	        
	       A[a][b]=A[a-2][b-1]*B[a][b]/C[a][b]-D[a];
	        
	       C[a][b]=A[a][b]*A[a][b]-D[a];
	       C[a][b+3]=B[a][b]/D[a]-A[a][b];
	      }

    return 0;
}