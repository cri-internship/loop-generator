#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(440, 550, "ones");
	double **D = create_two_dim_double(820, 190, "ones");
	double ***A = create_three_dim_double(400, 830, 420, "ones");
	double **B = create_two_dim_double(140, 120, "ones");

	for (int d = 5; d < 120; d++)
	  for (int c = 4; c < 140; c++)
	    for (int b = 4; b < 140; b++)
	      for (int a = 4; a < 140; a++)
	      {
	        
	       C[a][b]=C[a-4][b-3]*0.016;
	        
	       B[a][b]=B[a][b]+D[a][b]-A[a][b][c]*C[a][b];
	       C[a][b]=B[a-1][b-5]-C[a][b]*D[a][b];
	      }

    return 0;
}