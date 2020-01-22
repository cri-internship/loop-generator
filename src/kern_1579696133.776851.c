#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(260, 10, "zeros");
	double *C = create_one_dim_double(350, "zeros");
	double ***D = create_three_dim_double(870, 60, 20, "zeros");
	double ***A = create_three_dim_double(550, 660, 390, "zeros");
	double **E = create_two_dim_double(260, 850, "zeros");

	for (int d = 0; d < 390; d++)
	  for (int c = 0; c < 657; c++)
	    for (int b = 0; b < 547; b++)
	      for (int a = 0; a < 547; a++)
	      {
	        
	       A[a][b][c]=A[a+3][b+3][c]/C[a]+E[a][b]-B[a][b]*D[a][b][c];
	      }

    return 0;
}