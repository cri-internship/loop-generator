#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(760, 480, 100, "zeros");
	int *E = create_one_dim_int(160, "zeros");
	int *D = create_one_dim_int(220, "zeros");
	int **C = create_two_dim_int(270, 620, "zeros");
	int **B = create_two_dim_int(750, 40, "zeros");

	for (int d = 4; d < 100; d++)
	  for (int c = 3; c < 40; c++)
	    for (int b = 3; b < 157; b++)
	      for (int a = 3; a < 157; a++)
	      {
	        
	       A[a][b][c]=A[a-3][b-3][c-4]*28;
	        
	       E[a]=E[a+3]*9;
	        
	       C[a][b]=C[a+1][b+1]/D[a]+E[a]-A[a][b][c]*B[a][b];
	        
	       B[a][b]=39/E[a];
	       B[a][b-3]=D[a]+C[a][b];
	      }

    return 0;
}