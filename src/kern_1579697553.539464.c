#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(150, 210, "zeros");
	int *B = create_one_dim_int(630, "zeros");
	int **A = create_two_dim_int(1000, 1000, "zeros");

	for (int d = 3; d < 208; d++)
	  for (int c = 4; c < 150; c++)
	    for (int b = 4; b < 150; b++)
	      for (int a = 4; a < 150; a++)
	      {
	        
	       A[a][b]=A[a][b-2]/C[a][b]+B[a];
	        
	       A[a][b]=A[a-4][b-3]+0;
	        
	       A[a][b]=A[a+2][b+1]/30+B[a];
	        
	       C[a][b]=30;
	       C[a][b+2]=A[a][b]+B[a];
	      }

    return 0;
}