#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(810, "ones");
	int ***A = create_three_dim_int(780, 220, 790, "ones");
	int *B = create_one_dim_int(50, "ones");

	for (int d = 0; d < 785; d++)
	  for (int c = 0; c < 220; c++)
	    for (int b = 4; b < 48; b++)
	      for (int a = 4; a < 48; a++)
	      {
	        
	       B[a]=B[a-4]*A[a][b][c]+C[a];
	        
	       A[a][b][c]=A[a][b][c+5]*B[a];
	        
	       B[a]=B[a+2]+3;
	        
	       C[a]=0;
	       C[a+1]=B[a];
	      }

    return 0;
}