#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(280, "zeros");
	double ***B = create_three_dim_double(150, 590, 750, "zeros");

	for (int d = 0; d < 747; d++)
	  for (int c = 0; c < 586; c++)
	    for (int b = 2; b < 148; b++)
	      for (int a = 2; a < 148; a++)
	      {
	        
	       A[a]=A[a-1]-0.181;
	        
	       A[a]=0.96;
	        
	       B[a][b][c]=A[a];
	       B[a+2][b+4][c+3]=A[a];
	        
	       B[a][b][c]=A[a]-0.426;
	       A[a]=A[a-2]+B[a][b][c];
	      }

    return 0;
}