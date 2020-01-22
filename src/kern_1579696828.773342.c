#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(230, 840, 100, "zeros");
	float ***A = create_three_dim_float(740, 710, 150, "zeros");

	for (int d = 0; d < 99; d++)
	  for (int c = 0; c < 706; c++)
	    for (int b = 0; b < 226; b++)
	      for (int a = 0; a < 226; a++)
	      {
	        
	       B[a][b][c]=B[a+2][b+1][c+1]-A[a][b][c];
	        
	       A[a][b][c]=0.169;
	       A[a+4][b+4][c]=B[a][b][c];
	        
	       A[a][b][c]=B[a][b][c]/0.007;
	       B[a][b][c]=B[a+4][b+1][c]*A[a][b][c];
	      }

    return 0;
}