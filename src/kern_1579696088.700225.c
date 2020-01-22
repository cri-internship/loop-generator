#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***D = create_three_dim_int(820, 730, 420, "random");
	int *E = create_one_dim_int(640, "random");
	int ***A = create_three_dim_int(250, 650, 270, "random");
	int **C = create_two_dim_int(30, 870, "random");
	int *B = create_one_dim_int(200, "random");

	for (int d = 0; d < 267; d++)
	  for (int c = 4; c < 650; c++)
	    for (int b = 5; b < 30; b++)
	      for (int a = 5; a < 30; a++)
	      {
	        
	       C[a][b]=C[a-5][b-4]-8;
	        
	       A[a][b][c]=A[a+1][b][c+3]-40;
	        
	       C[a][b]=D[a][b][c]/19+B[a]-A[a][b][c];
	       B[a]=D[a+3][b+4][c+3]*C[a][b]-E[a]/B[a];
	      }

    return 0;
}