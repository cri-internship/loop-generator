#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(390, 10, 430, "ones");
	float ***B = create_three_dim_float(560, 360, 860, "ones");
	float **C = create_two_dim_float(320, 890, "ones");

	for (int d = 0; d < 426; d++)
	  for (int c = 0; c < 8; c++)
	    for (int b = 0; b < 388; b++)
	      for (int a = 0; a < 388; a++)
	      {
	        
	       B[a][b][c]=B[a][b+2][c+3]+0.914;
	        
	       A[a][b][c]=A[a+2][b+2][c+2]-0.974;
	        
	       A[a][b][c]=B[a][b][c];
	      }

    return 0;
}