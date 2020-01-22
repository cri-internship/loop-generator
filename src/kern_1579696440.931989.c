#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(970, 720, 510, "zeros");
	double *A = create_one_dim_double(440, "zeros");
	double **D = create_two_dim_double(690, 890, "zeros");
	double *B = create_one_dim_double(990, "zeros");

	for (int d = 2; d < 510; d++)
	  for (int c = 4; c < 720; c++)
	    for (int b = 5; b < 970; b++)
	      for (int a = 5; a < 970; a++)
	      {
	        
	       C[a][b][c]=0.763;
	       C[a-4][b-4][c-2]=0.793;
	        
	       B[a]=0.095;
	       B[a-5]=0.518;
	      }

    return 0;
}