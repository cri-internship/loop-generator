#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(830, 110, "random");
	int ***C = create_three_dim_int(100, 40, 140, "random");
	int *B = create_one_dim_int(550, "random");

	for (int d = 4; d < 135; d++)
	  for (int c = 4; c < 37; c++)
	    for (int b = 4; b < 95; b++)
	      for (int a = 4; a < 95; a++)
	      {
	        
	       C[a][b][c]=C[a][b-2][c-4]+1;
	        
	       A[a][b]=A[a-4][b-1]/B[a];
	        
	       A[a][b]=A[a][b+5]/45;
	        
	       B[a]=B[a+3]+A[a][b];
	        
	       A[a][b]=A[a+5][b+2]+2;
	        
	       B[a]=C[a][b][c]+B[a]/A[a][b];
	       A[a][b]=C[a+5][b+3][c+5]-A[a][b]+B[a];
	      }

    return 0;
}