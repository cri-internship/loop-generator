#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***D = create_three_dim_int(160, 730, 310, "random");
	int *A = create_one_dim_int(400, "random");
	int ***C = create_three_dim_int(460, 840, 140, "random");
	int **B = create_two_dim_int(210, 360, "random");

	for (int d = 0; d < 138; d++)
	  for (int c = 2; c < 725; c++)
	    for (int b = 1; b < 157; b++)
	      for (int a = 1; a < 157; a++)
	      {
	        
	       A[a]=A[a+1]*40;
	        
	       D[a][b][c]=D[a+1][b+5][c]/24;
	        
	       D[a][b][c]=A[a]-C[a][b][c]*B[a][b];
	        
	       C[a][b][c]=D[a][b][c]-25;
	       C[a+4][b+3][c+2]=B[a][b]*D[a][b][c]/A[a];
	        
	       C[a][b][c]=14;
	        
	       int var_a=D[a][b][c]+30;
	       int var_b=D[a+3][b+4][c]*1;
	        
	       B[a][b]=A[a]*D[a][b][c];
	       C[a][b][c]=A[a+4]-0/B[a][b]*D[a][b][c];
	      }

    return 0;
}