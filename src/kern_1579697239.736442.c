#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***E = create_three_dim_int(580, 300, 480, "zeros");
	int *A = create_one_dim_int(150, "zeros");
	int **B = create_two_dim_int(810, 880, "zeros");
	int **D = create_two_dim_int(840, 910, "zeros");
	int **C = create_two_dim_int(730, 590, "zeros");

	for (int d = 0; d < 480; d++)
	  for (int c = 5; c < 300; c++)
	    for (int b = 4; b < 580; b++)
	      for (int a = 4; a < 580; a++)
	      {
	        
	       E[a][b][c]=E[a][b-5][c]/A[a];
	        
	       D[a][b]=E[a][b][c]+D[a][b]-B[a][b];
	       C[a][b]=E[a-4][b-4][c]*C[a][b]-25+B[a][b]/D[a][b];
	      }

    return 0;
}