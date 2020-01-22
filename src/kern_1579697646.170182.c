#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *D = create_one_dim_int(890, "ones");
	int *B = create_one_dim_int(70, "ones");
	int **E = create_two_dim_int(470, 350, "ones");
	int **A = create_two_dim_int(590, 280, "ones");
	int ***C = create_three_dim_int(900, 220, 90, "ones");

	for (int d = 1; d < 345; d++)
	  for (int c = 3; c < 65; c++)
	    for (int b = 3; b < 65; b++)
	      for (int a = 3; a < 65; a++)
	      {
	        
	       E[a][b]=E[a][b+5]/39*D[a]-C[a][b][c];
	        
	       E[a][b]=A[a][b];
	        
	       B[a]=B[a]+E[a][b]-C[a][b][c]/A[a][b]*E[a][b];
	       E[a][b]=B[a]+C[a][b][c]*D[a]-A[a][b];
	        
	       A[a][b]=B[a]+C[a][b][c]-E[a][b]*D[a];
	       D[a]=B[a+5]/A[a][b]+49;
	      }

    return 0;
}