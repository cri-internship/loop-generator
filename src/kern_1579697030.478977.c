#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(70, 570, 300, "random");
	float ***A = create_three_dim_float(960, 660, 760, "random");

	for (int d = 5; d < 296; d++)
	  for (int c = 5; c < 568; c++)
	    for (int b = 1; b < 70; b++)
	      for (int a = 1; a < 70; a++)
	      {
	        
	       A[a][b][c]=A[a][b-2][c-1]-B[a][b][c];
	        
	       B[a][b][c]=B[a][b+2][c+4]/0.232;
	        
	       A[a][b][c]=B[a][b][c];
	        
	       A[a][b][c]=A[a][b][c]/B[a][b][c];
	       B[a][b][c]=A[a-1][b-5][c-5]*0.375;
	      }

    return 0;
}