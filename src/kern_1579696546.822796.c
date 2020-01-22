#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(430, 570, 160, "zeros");
	float ***B = create_three_dim_float(570, 250, 1000, "zeros");

	for (int d = 2; d < 160; d++)
	  for (int c = 3; c < 247; c++)
	    for (int b = 3; b < 430; b++)
	      for (int a = 3; a < 430; a++)
	      {
	        
	       B[a][b][c]=B[a+5][b+1][c+1]+A[a][b][c];
	        
	       B[a][b][c]=B[a+4][b+3][c+3]+0.323;
	        
	       A[a][b][c]=A[a][b][c]-B[a][b][c];
	       B[a][b][c]=A[a-3][b-3][c-2]-0.13;
	      }

    return 0;
}