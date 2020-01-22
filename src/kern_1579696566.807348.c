#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(290, 310, "ones");
	float ***A = create_three_dim_float(120, 60, 940, "ones");

	for (int d = 0; d < 936; d++)
	  for (int c = 3; c < 58; c++)
	    for (int b = 0; b < 116; b++)
	      for (int a = 0; a < 116; a++)
	      {
	        
	       A[a][b][c]=0.207;
	       A[a+4][b+2][c+4]=0.366;
	        
	       A[a][b][c]=B[a][b]+A[a][b][c];
	       B[a][b]=B[a][b-3]*A[a][b][c];
	      }

    return 0;
}