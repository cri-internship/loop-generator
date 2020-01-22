#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(400, 890, 180, "random");
	float **B = create_two_dim_float(220, 980, "random");

	for (int d = 5; d < 177; d++)
	  for (int c = 2; c < 886; c++)
	    for (int b = 4; b < 219; b++)
	      for (int a = 4; a < 219; a++)
	      {
	        
	       B[a][b]=B[a-4][b-1]*A[a][b][c];
	        
	       A[a][b][c]=A[a][b-2][c-5]-B[a][b];
	        
	       B[a][b]=B[a][b-1]*0.659;
	        
	       A[a][b][c]=B[a][b];
	        
	       float var_a=A[a][b][c]+0.882;
	       float var_b=A[a+5][b+4][c+3]*0.661;
	      }

    return 0;
}