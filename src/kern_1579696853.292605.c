#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *E = create_one_dim_int(940, "ones");
	int **C = create_two_dim_int(310, 710, "ones");
	int ***B = create_three_dim_int(670, 60, 700, "ones");
	int *D = create_one_dim_int(650, "ones");
	int ***A = create_three_dim_int(300, 990, 380, "ones");

	for (int d = 3; d < 377; d++)
	  for (int c = 4; c < 60; c++)
	    for (int b = 4; b < 300; b++)
	      for (int a = 4; a < 300; a++)
	      {
	        
	       C[a][b]=C[a-4][b-4]/24;
	        
	       B[a][b][c]=B[a-3][b-2][c-3]*7;
	        
	       E[a]=E[a-4]-B[a][b][c]/C[a][b]*D[a];
	        
	       A[a][b][c]=A[a][b+5][c+3]-33;
	        
	       C[a][b]=A[a][b][c]-E[a]/E[a];
	       E[a]=A[a][b-3][c-3]*E[a]/D[a]+C[a][b]-B[a][b][c];
	        
	       B[a][b][c]=D[a]-B[a][b][c]/C[a][b]*E[a];
	       A[a][b][c]=D[a-4]+E[a];
	      }

    return 0;
}