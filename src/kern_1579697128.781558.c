#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(680, "ones");
	int *B = create_one_dim_int(210, "ones");
	int *C = create_one_dim_int(280, "ones");
	int ***D = create_three_dim_int(750, 120, 990, "ones");

	for (int d = 3; d < 990; d++)
	  for (int c = 0; c < 120; c++)
	    for (int b = 4; b < 206; b++)
	      for (int a = 4; a < 206; a++)
	      {
	        
	       B[a]=B[a+4]/36;
	        
	       B[a]=B[a+2]-A[a]+4;
	        
	       D[a][b][c]=C[a]*B[a];
	       D[a-1][b][c-3]=40-C[a];
	        
	       B[a]=B[a]/D[a][b][c];
	       A[a]=B[a-4]*D[a][b][c]+A[a];
	      }

    return 0;
}