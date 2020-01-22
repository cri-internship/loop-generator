#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(90, 770, "zeros");
	double **C = create_two_dim_double(140, 880, "zeros");
	double ***A = create_three_dim_double(170, 840, 740, "zeros");

	for (int d = 0; d < 740; d++)
	  for (int c = 5; c < 767; c++)
	    for (int b = 5; b < 86; b++)
	      for (int a = 5; a < 86; a++)
	      {
	        
	       A[a][b][c]=A[a-5][b-5][c]/0.732;
	        
	       B[a][b]=A[a][b][c];
	       B[a+4][b+3]=C[a][b];
	      }

    return 0;
}