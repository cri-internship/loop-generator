#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(840, 770, 600, "zeros");
	float ***B = create_three_dim_float(420, 20, 630, "zeros");

	for (int d = 3; d < 597; d++)
	  for (int c = 3; c < 17; c++)
	    for (int b = 3; b < 417; b++)
	      for (int a = 3; a < 417; a++)
	      {
	        
	       A[a][b][c]=A[a-1][b-2][c-2]+B[a][b][c];
	        
	       A[a][b][c]=A[a-3][b-3][c-3]*B[a][b][c];
	        
	       B[a][b][c]=B[a+3][b+3][c+1]/A[a][b][c];
	        
	       A[a][b][c]=A[a+1][b][c+3]+0.846;
	      }

    return 0;
}