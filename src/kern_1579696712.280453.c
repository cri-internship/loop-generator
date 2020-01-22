#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(570, 230, 150, "zeros");
	double *A = create_one_dim_double(160, "zeros");
	double *E = create_one_dim_double(240, "zeros");
	double *B = create_one_dim_double(40, "zeros");
	double *D = create_one_dim_double(510, "zeros");

	for (int d = 0; d < 150; d++)
	  for (int c = 5; c < 230; c++)
	    for (int b = 4; b < 160; b++)
	      for (int a = 4; a < 160; a++)
	      {
	        
	       C[a][b][c]=C[a-2][b-5][c]*D[a]/E[a];
	        
	       A[a]=A[a-4]/B[a]*C[a][b][c];
	        
	       A[a]=A[a-3]-0.792;
	      }

    return 0;
}