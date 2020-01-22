#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(90, 920, "ones");
	int **D = create_two_dim_int(210, 950, "ones");
	int *A = create_one_dim_int(730, "ones");
	int ***B = create_three_dim_int(450, 260, 890, "ones");
	int *E = create_one_dim_int(950, "ones");

	for (int d = 0; d < 919; d++)
	  for (int c = 3; c < 85; c++)
	    for (int b = 3; b < 85; b++)
	      for (int a = 3; a < 85; a++)
	      {
	        
	       A[a]=A[a+1]-22;
	        
	       C[a][b]=C[a+1][b+1]/13;
	        
	       C[a][b]=D[a][b]-B[a][b][c];
	        
	       B[a][b][c]=E[a]*C[a][b];
	       C[a][b]=E[a-3]*B[a][b][c]-A[a]/C[a][b];
	      }

    return 0;
}