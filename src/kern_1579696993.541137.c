#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(620, "ones");
	double ***B = create_three_dim_double(430, 880, 110, "ones");

	for (int d = 4; d < 110; d++)
	  for (int c = 5; c < 880; c++)
	    for (int b = 4; b < 430; b++)
	      for (int a = 4; a < 430; a++)
	      {
	        
	       A[a]=A[a-1]-0.752;
	        
	       B[a][b][c]=B[a-1][b-5][c-4]*A[a];
	        
	       A[a]=A[a-4]+0.987;
	      }

    return 0;
}