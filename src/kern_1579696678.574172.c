#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(160, 110, "random");
	int ***B = create_three_dim_int(840, 750, 510, "random");
	int ***A = create_three_dim_int(670, 200, 720, "random");

	for (int d = 1; d < 510; d++)
	  for (int c = 3; c < 110; c++)
	    for (int b = 3; b < 160; b++)
	      for (int a = 3; a < 160; a++)
	      {
	        
	       C[a][b]=C[a-3][b]*B[a][b][c]-A[a][b][c];
	        
	       C[a][b]=B[a][b][c]*C[a][b]-A[a][b][c];
	       A[a][b][c]=B[a-2][b-3][c-1]-C[a][b]*A[a][b][c];
	      }

    return 0;
}