#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***D = create_three_dim_int(110, 140, 840, "ones");
	int **C = create_two_dim_int(200, 930, "ones");
	int *B = create_one_dim_int(450, "ones");
	int *A = create_one_dim_int(680, "ones");

	for (int d = 2; d < 838; d++)
	  for (int c = 5; c < 136; c++)
	    for (int b = 4; b < 108; b++)
	      for (int a = 4; a < 108; a++)
	      {
	        
	       D[a][b][c]=D[a-3][b-1][c-1]*A[a]-19;
	        
	       C[a][b]=C[a-1][b-5]/B[a]+D[a][b][c]-A[a];
	        
	       D[a][b][c]=D[a+2][b+4][c+2]-C[a][b]/B[a]+A[a];
	        
	       B[a]=B[a+3]-38;
	        
	       B[a]=C[a][b]+D[a][b][c]*A[a];
	       D[a][b][c]=C[a+2][b+4]+A[a];
	      }

    return 0;
}