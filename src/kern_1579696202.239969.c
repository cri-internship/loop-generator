#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(420, 140, 740, "zeros");
	int ***D = create_three_dim_int(590, 440, 790, "zeros");
	int **E = create_two_dim_int(320, 180, "zeros");
	int *A = create_one_dim_int(990, "zeros");
	int ***C = create_three_dim_int(410, 550, 220, "zeros");

	for (int d = 3; d < 739; d++)
	  for (int c = 5; c < 138; c++)
	    for (int b = 4; b < 320; b++)
	      for (int a = 4; a < 320; a++)
	      {
	        
	       E[a][b]=E[a][b-5]*A[a]/D[a][b][c]+B[a][b][c]-C[a][b][c];
	        
	       E[a][b]=E[a][b-4]-49*C[a][b][c]/A[a];
	        
	       D[a][b][c]=D[a+2][b+1][c+2]/4;
	        
	       A[a]=A[a+1]-E[a][b];
	        
	       B[a][b][c]=31;
	       B[a-4][b-3][c-3]=41;
	        
	       B[a][b][c]=17;
	      }

    return 0;
}