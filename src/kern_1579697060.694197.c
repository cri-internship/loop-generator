#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *D = create_one_dim_int(760, "zeros");
	int **A = create_two_dim_int(730, 430, "zeros");
	int ***B = create_three_dim_int(90, 650, 220, "zeros");
	int ***C = create_three_dim_int(260, 220, 610, "zeros");

	for (int d = 1; d < 220; d++)
	  for (int c = 0; c < 650; c++)
	    for (int b = 5; b < 90; b++)
	      for (int a = 5; a < 90; a++)
	      {
	        
	       D[a]=D[a-1]/C[a][b][c]*B[a][b][c]+A[a][b];
	        
	       B[a][b][c]=B[a-5][b][c-1]/D[a]+C[a][b][c];
	      }

    return 0;
}