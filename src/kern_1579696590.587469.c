#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(970, 780, "zeros");
	double ***A = create_three_dim_double(820, 360, 560, "zeros");
	double *C = create_one_dim_double(140, "zeros");

	for (int d = 5; d < 775; d++)
	  for (int c = 1; c < 969; c++)
	    for (int b = 1; b < 969; b++)
	      for (int a = 1; a < 969; a++)
	      {
	        
	       B[a][b]=0.855;
	       B[a+1][b+5]=0.415;
	        
	       C[a]=B[a][b]-A[a][b][c]+C[a];
	       A[a][b][c]=B[a-1][b-5]/0.381;
	      }

    return 0;
}