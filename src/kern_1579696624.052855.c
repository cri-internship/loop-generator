#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(460, 680, "ones");
	int **D = create_two_dim_int(800, 580, "ones");
	int ***B = create_three_dim_int(950, 370, 990, "ones");
	int **C = create_two_dim_int(160, 980, "ones");

	for (int d = 0; d < 990; d++)
	  for (int c = 4; c < 367; c++)
	    for (int b = 3; b < 455; b++)
	      for (int a = 3; a < 455; a++)
	      {
	        
	       D[a][b]=D[a-3][b-2]/A[a][b]*C[a][b]-B[a][b][c];
	        
	       A[a][b]=A[a+1][b+5]/10*B[a][b][c];
	        
	       A[a][b]=B[a][b][c]/D[a][b];
	        
	       B[a][b][c]=4;
	       B[a+5][b+3][c]=0;
	        
	       C[a][b]=A[a][b]/B[a][b][c]-D[a][b];
	       D[a][b]=A[a-3][b-4]*D[a][b]-C[a][b]/B[a][b][c];
	      }

    return 0;
}