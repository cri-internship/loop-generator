#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **E = create_two_dim_int(500, 980, "ones");
	int ***B = create_three_dim_int(790, 180, 50, "ones");
	int *A = create_one_dim_int(640, "ones");
	int ***D = create_three_dim_int(710, 870, 570, "ones");
	int *C = create_one_dim_int(420, "ones");

	for (int d = 4; d < 45; d++)
	  for (int c = 5; c < 177; c++)
	    for (int b = 4; b < 420; b++)
	      for (int a = 4; a < 420; a++)
	      {
	        
	       D[a][b][c]=D[a][b-5][c-4]+39;
	        
	       E[a][b]=E[a][b]-B[a][b][c]/C[a]*A[a];
	       E[a][b]=D[a][b][c]/A[a];
	        
	       D[a][b][c]=C[a]*E[a][b]+E[a][b]-B[a][b][c];
	       C[a]=B[a][b][c];
	        
	       B[a][b][c]=7;
	       B[a+1][b+3][c+5]=9;
	        
	       A[a]=17;
	       A[a-4]=2;
	        
	       A[a]=D[a][b][c]+C[a]*B[a][b][c];
	       B[a][b][c]=D[a-2][b][c-3]+E[a][b]-A[a]*B[a][b][c];
	      }

    return 0;
}