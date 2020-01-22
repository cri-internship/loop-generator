#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***E = create_three_dim_int(700, 440, 340, "random");
	int *B = create_one_dim_int(110, "random");
	int ***C = create_three_dim_int(290, 190, 10, "random");
	int **A = create_two_dim_int(370, 230, "random");
	int **D = create_two_dim_int(30, 770, "random");

	for (int d = 5; d < 10; d++)
	  for (int c = 4; c < 190; c++)
	    for (int b = 2; b < 30; b++)
	      for (int a = 2; a < 30; a++)
	      {
	        
	       C[a][b][c]=C[a][b-3][c-4]-B[a]/A[a][b]*E[a][b][c];
	        
	       C[a][b][c]=41;
	        
	       D[a][b]=D[a][b]-C[a][b][c]*B[a]/E[a][b][c];
	       E[a][b][c]=D[a][b-4]*E[a][b][c]-A[a][b];
	      }

    return 0;
}