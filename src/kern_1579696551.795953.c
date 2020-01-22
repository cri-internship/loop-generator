#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(920, 940, 40, "random");
	int **B = create_two_dim_int(830, 340, "random");
	int *D = create_one_dim_int(940, "random");
	int ***C = create_three_dim_int(950, 410, 470, "random");

	for (int d = 3; d < 40; d++)
	  for (int c = 4; c < 340; c++)
	    for (int b = 5; b < 830; b++)
	      for (int a = 5; a < 830; a++)
	      {
	        
	       A[a][b][c]=A[a-4][b-3][c]*D[a];
	        
	       B[a][b]=B[a-4][b-3]/50;
	        
	       B[a][b]=B[a-2][b]-C[a][b][c]*A[a][b][c]/4;
	        
	       B[a][b]=B[a-5][b-2]-13;
	        
	       A[a][b][c]=B[a][b]/34;
	        
	       D[a]=C[a][b][c]/15-A[a][b][c]*B[a][b];
	       C[a][b][c]=C[a-2][b-1][c-3]/B[a][b]*A[a][b][c];
	      }

    return 0;
}