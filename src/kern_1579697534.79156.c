#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(400, 220, 890, "zeros");
	double *A = create_one_dim_double(290, "zeros");

	for (int d = 1; d < 885; d++)
	  for (int c = 2; c < 215; c++)
	    for (int b = 5; b < 397; b++)
	      for (int a = 5; a < 397; a++)
	      {
	        
	       B[a][b][c]=B[a-5][b-2][c-1]*A[a];
	        
	       B[a][b][c]=B[a][b][c]*0.24;
	       A[a]=B[a+3][b+3][c+1]/0.973;
	        
	       B[a][b][c]=B[a][b][c]-A[a];
	       B[a][b][c]=B[a+3][b+5][c+5]-A[a];
	      }

    return 0;
}