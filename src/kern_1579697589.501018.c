#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(920, "zeros");
	int ***B = create_three_dim_int(510, 580, 90, "zeros");
	int **C = create_two_dim_int(410, 900, "zeros");

	for (int d = 4; d < 916; d++)
	  for (int c = 4; c < 916; c++)
	    for (int b = 4; b < 916; b++)
	      for (int a = 4; a < 916; a++)
	      {
	        
	       A[a]=A[a+4]*C[a][b];
	        
	       A[a]=B[a][b][c];
	        
	       B[a][b][c]=A[a]/C[a][b]*B[a][b][c];
	       C[a][b]=A[a+2]/B[a][b][c];
	      }

    return 0;
}