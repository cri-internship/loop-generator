#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***E = create_three_dim_int(1000, 360, 660, "ones");
	int ***C = create_three_dim_int(540, 620, 10, "ones");
	int ***D = create_three_dim_int(770, 170, 970, "ones");
	int *B = create_one_dim_int(690, "ones");
	int **A = create_two_dim_int(340, 790, "ones");

	for (int d = 3; d < 6; d++)
	  for (int c = 5; c < 165; c++)
	    for (int b = 4; b < 538; b++)
	      for (int a = 4; a < 538; a++)
	      {
	        
	       E[a][b][c]=E[a-4][b-5][c-3]-B[a]*C[a][b][c]/A[a][b]+D[a][b][c];
	        
	       D[a][b][c]=D[a][b][c+3]/37+C[a][b][c]-B[a]*E[a][b][c];
	        
	       D[a][b][c]=A[a][b];
	        
	       B[a]=48;
	       B[a-2]=43;
	        
	       C[a][b][c]=D[a][b][c]-E[a][b][c]*B[a];
	       C[a][b+5][c]=B[a]+A[a][b];
	        
	       B[a]=C[a][b][c]/B[a]+D[a][b][c]*A[a][b]-6;
	       C[a][b][c]=C[a+2][b+2][c+4]+D[a][b][c]/16;
	        
	       int var_a=B[a]+39;
	       int var_b=B[a+1]*15;
	      }

    return 0;
}