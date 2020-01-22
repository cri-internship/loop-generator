#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **E = create_two_dim_double(920, 750, "ones");
	double **C = create_two_dim_double(970, 620, "ones");
	double **A = create_two_dim_double(570, 40, "ones");
	double **B = create_two_dim_double(990, 800, "ones");
	double **D = create_two_dim_double(160, 460, "ones");

	for (int d = 3; d < 39; d++)
	  for (int c = 5; c < 565; c++)
	    for (int b = 5; b < 565; b++)
	      for (int a = 5; a < 565; a++)
	      {
	        
	       A[a][b]=A[a-4][b-3]-E[a][b]/D[a][b]*C[a][b]+B[a][b];
	        
	       C[a][b]=C[a-5][b]-0.567;
	        
	       E[a][b]=E[a+1][b+1]-0.281;
	        
	       A[a][b]=A[a+5][b+1]+C[a][b]*D[a][b]-B[a][b];
	        
	       E[a][b]=E[a+1][b+5]+A[a][b];
	        
	       A[a][b]=A[a][b]-C[a][b]/B[a][b]*E[a][b]+D[a][b];
	      }

    return 0;
}