#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *D = create_one_dim_int(580, "random");
	int **B = create_two_dim_int(790, 540, "random");
	int *C = create_one_dim_int(620, "random");
	int **A = create_two_dim_int(30, 180, "random");
	int ***E = create_three_dim_int(620, 140, 950, "random");

	for (int d = 0; d < 950; d++)
	  for (int c = 0; c < 136; c++)
	    for (int b = 2; b < 25; b++)
	      for (int a = 2; a < 25; a++)
	      {
	        
	       D[a]=D[a-2]-6;
	        
	       A[a][b]=A[a+5][b+4]*C[a]-E[a][b][c]/B[a][b];
	        
	       C[a]=27;
	       C[a]=5;
	        
	       B[a][b]=47;
	       B[a][b+2]=6;
	        
	       D[a]=E[a][b][c]/D[a]+A[a][b]*C[a]-A[a][b];
	       C[a]=E[a+4][b+4][c]/47;
	      }

    return 0;
}