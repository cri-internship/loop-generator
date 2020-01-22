#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(840, "ones");
	int ***C = create_three_dim_int(650, 300, 590, "ones");
	int *A = create_one_dim_int(410, "ones");

	for (int d = 5; d < 410; d++)
	  for (int c = 5; c < 410; c++)
	    for (int b = 5; b < 410; b++)
	      for (int a = 5; a < 410; a++)
	      {
	        
	       A[a]=B[a]/A[a]+C[a][b][c];
	       B[a]=B[a-5]+44*C[a][b][c];
	        
	       C[a][b][c]=A[a]/12*C[a][b][c];
	      }

    return 0;
}