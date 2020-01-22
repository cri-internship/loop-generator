#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(420, 930, 880, "random");
	int *A = create_one_dim_int(900, "random");
	int ***B = create_three_dim_int(800, 490, 270, "random");
	int *D = create_one_dim_int(990, "random");

	for (int d = 0; d < 895; d++)
	  for (int c = 0; c < 895; c++)
	    for (int b = 0; b < 895; b++)
	      for (int a = 0; a < 895; a++)
	      {
	        
	       A[a]=A[a]-B[a][b][c]/C[a][b][c];
	       C[a][b][c]=A[a+5]-D[a]+B[a][b][c]*C[a][b][c];
	      }

    return 0;
}