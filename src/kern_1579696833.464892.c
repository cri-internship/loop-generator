#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(780, 550, 60, "ones");
	float ***A = create_three_dim_float(430, 560, 650, "ones");

	for (int d = 3; d < 58; d++)
	  for (int c = 1; c < 545; c++)
	    for (int b = 3; b < 430; b++)
	      for (int a = 3; a < 430; a++)
	      {
	        
	       B[a][b][c]=B[a-3][b-1][c-3]*A[a][b][c];
	        
	       B[a][b][c]=0.474;
	        
	       A[a][b][c]=A[a][b][c]/B[a][b][c];
	       B[a][b][c]=A[a][b+5][c+3]*B[a][b][c];
	      }

    return 0;
}