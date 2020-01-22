#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(40, 70, "random");
	int **D = create_two_dim_int(770, 190, "random");
	int **B = create_two_dim_int(1000, 250, "random");
	int ***A = create_three_dim_int(850, 530, 670, "random");

	for (int d = 1; d < 66; d++)
	  for (int c = 4; c < 36; c++)
	    for (int b = 4; b < 36; b++)
	      for (int a = 4; a < 36; a++)
	      {
	        
	       B[a][b]=B[a-4][b-1]-4;
	        
	       B[a][b]=B[a+4][b]-1;
	        
	       B[a][b]=B[a+1][b+5]-D[a][b]/C[a][b]+A[a][b][c];
	        
	       C[a][b]=C[a+4][b+4]/B[a][b]*D[a][b];
	      }

    return 0;
}