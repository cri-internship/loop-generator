#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(630, "random");
	int ***B = create_three_dim_int(1000, 510, 690, "random");
	int **C = create_two_dim_int(420, 530, "random");

	for (int d = 0; d < 690; d++)
	  for (int c = 4; c < 510; c++)
	    for (int b = 4; b < 416; b++)
	      for (int a = 4; a < 416; a++)
	      {
	        
	       A[a]=A[a-1]*C[a][b]-B[a][b][c];
	        
	       C[a][b]=C[a-1][b-4]*5;
	        
	       B[a][b][c]=B[a-4][b][c]/A[a];
	        
	       C[a][b]=C[a][b-4]-34;
	        
	       C[a][b]=C[a+4][b+4]+A[a];
	        
	       C[a][b]=C[a+4][b+1]*B[a][b][c]/A[a];
	      }

    return 0;
}