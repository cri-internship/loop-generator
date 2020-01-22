#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(300, 920, 60, "ones");
	float ***C = create_three_dim_float(740, 300, 90, "ones");
	float ***A = create_three_dim_float(170, 10, 500, "ones");

	for (int d = 0; d < 90; d++)
	  for (int c = 0; c < 9; c++)
	    for (int b = 0; b < 170; b++)
	      for (int a = 0; a < 170; a++)
	      {
	        
	       C[a][b][c]=B[a][b][c];
	       C[a+3][b+3][c]=A[a][b][c]/A[a][b][c];
	        
	       A[a][b][c]=0.548;
	       A[a][b+1][c+1]=0.124;
	      }

    return 0;
}