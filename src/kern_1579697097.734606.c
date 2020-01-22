#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *D = create_one_dim_double(520, "zeros");
	double *B = create_one_dim_double(450, "zeros");
	double **C = create_two_dim_double(310, 740, "zeros");
	double ***E = create_three_dim_double(290, 460, 510, "zeros");
	double **A = create_two_dim_double(890, 780, "zeros");

	for (int d = 0; d < 737; d++)
	  for (int c = 0; c < 305; c++)
	    for (int b = 0; b < 305; b++)
	      for (int a = 0; a < 305; a++)
	      {
	        
	       C[a][b]=C[a+5][b+3]/E[a][b][c]*A[a][b]-D[a];
	      }

    return 0;
}