#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***E = create_three_dim_int(140, 980, 280, "ones");
	int **B = create_two_dim_int(780, 220, "ones");
	int ***D = create_three_dim_int(810, 730, 750, "ones");
	int ***C = create_three_dim_int(120, 870, 220, "ones");
	int **A = create_two_dim_int(560, 370, "ones");

	for (int d = 0; d < 220; d++)
	  for (int c = 5; c < 370; c++)
	    for (int b = 5; b < 120; b++)
	      for (int a = 5; a < 120; a++)
	      {
	        
	       A[a][b]=A[a-1][b-5]-3;
	        
	       A[a][b]=A[a][b]+B[a][b];
	       D[a][b][c]=A[a-2][b-4]+26;
	        
	       E[a][b][c]=C[a][b][c]+E[a][b][c];
	       C[a][b][c]=C[a-5][b-1][c]+A[a][b]/E[a][b][c];
	      }

    return 0;
}