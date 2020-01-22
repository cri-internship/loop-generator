#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(380, "zeros");
	int ***B = create_three_dim_int(570, 920, 840, "zeros");

	for (int d = 0; d < 835; d++)
	  for (int c = 0; c < 917; c++)
	    for (int b = 2; b < 375; b++)
	      for (int a = 2; a < 375; a++)
	      {
	        
	       A[a]=A[a-2]/B[a][b][c];
	        
	       A[a]=B[a][b][c];
	        
	       B[a][b][c]=A[a];
	       B[a+2][b+3][c+5]=3;
	        
	       A[a]=A[a]/B[a][b][c];
	       B[a][b][c]=A[a+4]/B[a][b][c];
	      }

    return 0;
}