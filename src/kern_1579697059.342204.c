#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(420, "ones");
	int *B = create_one_dim_int(800, "ones");
	int *D = create_one_dim_int(770, "ones");
	int ***A = create_three_dim_int(470, 610, 800, "ones");

	for (int d = 3; d < 796; d++)
	  for (int c = 3; c < 608; c++)
	    for (int b = 4; b < 420; b++)
	      for (int a = 4; a < 420; a++)
	      {
	        
	       A[a][b][c]=A[a][b-3][c-3]-41;
	        
	       C[a]=C[a-4]*30;
	        
	       B[a]=B[a+4]*C[a]-A[a][b][c];
	        
	       A[a][b][c]=A[a+1][b+2][c+4]-12;
	        
	       D[a]=43;
	       D[a+4]=6;
	        
	       A[a][b][c]=D[a]-B[a]*C[a];
	       C[a]=D[a+4]*B[a];
	      }

    return 0;
}