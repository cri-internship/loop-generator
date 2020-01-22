#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(530, 740, "random");
	double **C = create_two_dim_double(290, 950, "random");
	double **B = create_two_dim_double(130, 10, "random");
	double ***D = create_three_dim_double(530, 230, 530, "random");

	for (int d = 0; d < 8; d++)
	  for (int c = 0; c < 125; c++)
	    for (int b = 0; b < 125; b++)
	      for (int a = 0; a < 125; a++)
	      {
	        
	       B[a][b]=B[a+5][b+2]*C[a][b]+A[a][b]/D[a][b][c];
	        
	       A[a][b]=0.736;
	       A[a][b+2]=0.067;
	      }

    return 0;
}