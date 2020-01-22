#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(130, "zeros");
	double ***A = create_three_dim_double(740, 610, 610, "zeros");
	double **C = create_two_dim_double(790, 230, "zeros");

	for (int d = 5; d < 230; d++)
	  for (int c = 5; c < 130; c++)
	    for (int b = 5; b < 130; b++)
	      for (int a = 5; a < 130; a++)
	      {
	        
	       C[a][b]=C[a-5][b-5]*0.51;
	        
	       C[a][b]=C[a-2][b]/0.29;
	        
	       B[a]=B[a-3]*0.877;
	        
	       C[a][b]=C[a][b]-B[a]*A[a][b][c];
	       A[a][b][c]=C[a-2][b-1]+A[a][b][c]*B[a];
	      }

    return 0;
}