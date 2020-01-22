#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(670, 250, 280, "zeros");
	double ***C = create_three_dim_double(830, 460, 830, "zeros");
	double *A = create_one_dim_double(390, "zeros");

	for (int d = 4; d < 280; d++)
	  for (int c = 5; c < 250; c++)
	    for (int b = 5; b < 390; b++)
	      for (int a = 5; a < 390; a++)
	      {
	        
	       A[a]=A[a-5]-0.018;
	        
	       B[a][b][c]=B[a-2][b][c-4]+0.014;
	        
	       B[a][b][c]=A[a];
	      }

    return 0;
}