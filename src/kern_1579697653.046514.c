#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(240, 30, 360, "random");
	float ***B = create_three_dim_float(990, 720, 920, "random");

	for (int d = 0; d < 355; d++)
	  for (int c = 0; c < 30; c++)
	    for (int b = 3; b < 240; b++)
	      for (int a = 3; a < 240; a++)
	      {
	        
	       B[a][b][c]=B[a+2][b+1][c+1]-0.799;
	        
	       A[a][b][c]=B[a][b][c];
	       A[a][b][c+5]=0.869;
	        
	       B[a][b][c]=A[a][b][c];
	      }

    return 0;
}