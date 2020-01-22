#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(110, 920, 280, "random");
	float ***A = create_three_dim_float(590, 500, 600, "random");

	for (int d = 0; d < 278; d++)
	  for (int c = 0; c < 495; c++)
	    for (int b = 3; b < 106; b++)
	      for (int a = 3; a < 106; a++)
	      {
	        
	       B[a][b][c]=B[a][b+1][c+2]+A[a][b][c];
	        
	       B[a][b][c]=B[a+4][b][c+2]-A[a][b][c];
	        
	       B[a][b][c]=B[a+2][b+4][c]*A[a][b][c];
	        
	       A[a][b][c]=A[a+2][b+5][c+5]/0.747;
	        
	       A[a][b][c]=B[a][b][c];
	      }

    return 0;
}