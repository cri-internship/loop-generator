#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **E = create_two_dim_double(520, 20, "random");
	double **B = create_two_dim_double(660, 440, "random");
	double **D = create_two_dim_double(350, 110, "random");
	double ***C = create_three_dim_double(700, 440, 870, "random");
	double *A = create_one_dim_double(480, "random");

	for (int d = 2; d < 866; d++)
	  for (int c = 1; c < 439; c++)
	    for (int b = 2; b < 700; b++)
	      for (int a = 2; a < 700; a++)
	      {
	        
	       C[a][b][c]=C[a-2][b-1][c-2]+D[a][b]-A[a]*E[a][b];
	        
	       C[a][b][c]=B[a][b]*D[a][b];
	      }

    return 0;
}