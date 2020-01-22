#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(30, "ones");
	double ***B = create_three_dim_double(860, 900, 750, "ones");

	for (int d = 3; d < 747; d++)
	  for (int c = 0; c < 899; c++)
	    for (int b = 5; b < 30; b++)
	      for (int a = 5; a < 30; a++)
	      {
	        
	       B[a][b][c]=B[a+3][b+1][c+2]*A[a];
	        
	       B[a][b][c]=0.812;
	        
	       A[a]=A[a]/B[a][b][c];
	       B[a][b][c]=A[a-5]*B[a][b][c];
	      }

    return 0;
}