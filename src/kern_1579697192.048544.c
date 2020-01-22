#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *D = create_one_dim_int(350, "ones");
	int *A = create_one_dim_int(40, "ones");
	int ***C = create_three_dim_int(680, 110, 120, "ones");
	int *B = create_one_dim_int(330, "ones");

	for (int d = 0; d < 120; d++)
	  for (int c = 0; c < 105; c++)
	    for (int b = 1; b < 36; b++)
	      for (int a = 1; a < 36; a++)
	      {
	        
	       B[a]=B[a-1]+17;
	        
	       D[a]=D[a+4]-17;
	        
	       A[a]=A[a+4]+41;
	        
	       D[a]=4;
	        
	       C[a][b][c]=A[a];
	       C[a][b+5][c]=D[a]*B[a]/D[a];
	      }

    return 0;
}