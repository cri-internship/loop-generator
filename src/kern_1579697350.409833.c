#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(430, 860, 640, "random");
	int ***D = create_three_dim_int(170, 620, 620, "random");
	int *C = create_one_dim_int(540, "random");
	int *E = create_one_dim_int(980, "random");
	int ***A = create_three_dim_int(980, 410, 690, "random");

	for (int d = 4; d < 617; d++)
	  for (int c = 4; c < 410; c++)
	    for (int b = 5; b < 167; b++)
	      for (int a = 5; a < 167; a++)
	      {
	        
	       B[a][b][c]=B[a-1][b-1][c-1]/35;
	        
	       D[a][b][c]=D[a][b+5][c+3]*C[a]+B[a][b][c];
	        
	       D[a][b][c]=D[a+3][b+3][c+3]*26;
	        
	       C[a]=48;
	       C[a-2]=44;
	        
	       C[a]=A[a][b][c]/D[a][b][c]*E[a];
	       E[a]=A[a-5][b][c-4]+C[a]-D[a][b][c]/B[a][b][c];
	        
	       A[a][b][c]=D[a][b][c]+A[a][b][c]-B[a][b][c]*E[a]/A[a][b][c];
	       B[a][b][c]=D[a-1][b-4][c-3]+B[a][b][c]-A[a][b][c]*30;
	      }

    return 0;
}