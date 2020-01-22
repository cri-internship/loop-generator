#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***E = create_three_dim_double(610, 560, 130, "random");
	double **D = create_two_dim_double(760, 300, "random");
	double ***A = create_three_dim_double(360, 600, 940, "random");
	double **C = create_two_dim_double(610, 560, "random");
	double *B = create_one_dim_double(460, "random");

	for (int d = 0; d < 940; d++)
	  for (int c = 4; c < 560; c++)
	    for (int b = 5; b < 360; b++)
	      for (int a = 5; a < 360; a++)
	      {
	        
	       B[a]=B[a-3]+0.471;
	        
	       C[a][b]=C[a-5][b-4]*E[a][b][c];
	        
	       double var_a=A[a][b][c]+0.594;
	       double var_b=A[a][b-2][c]+0.931;
	      }

    return 0;
}