#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(780, 840, 660, "zeros");
	float **C = create_two_dim_float(290, 760, "zeros");
	float ***A = create_three_dim_float(220, 630, 900, "zeros");
	float ***E = create_three_dim_float(180, 250, 70, "zeros");
	float *D = create_one_dim_float(520, "zeros");

	for (int d = 0; d < 658; d++)
	  for (int c = 1; c < 760; c++)
	    for (int b = 4; b < 290; b++)
	      for (int a = 4; a < 290; a++)
	      {
	        
	       C[a][b]=C[a-4][b-1]*D[a]/B[a][b][c]+A[a][b][c]-E[a][b][c];
	        
	       B[a][b][c]=B[a+5][b][c+2]+0.922;
	      }

    return 0;
}