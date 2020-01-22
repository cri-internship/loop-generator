#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(730, "random");
	int **D = create_two_dim_int(50, 730, "random");
	int **A = create_two_dim_int(70, 450, "random");
	int *C = create_one_dim_int(660, "random");
	int ***E = create_three_dim_int(410, 150, 230, "random");

	for (int d = 2; d < 446; d++)
	  for (int c = 4; c < 65; c++)
	    for (int b = 4; b < 65; b++)
	      for (int a = 4; a < 65; a++)
	      {
	        
	       A[a][b]=A[a-4][b]-1;
	        
	       A[a][b]=A[a-3][b-2]-4*E[a][b][c]+D[a][b];
	        
	       A[a][b]=A[a+5][b+4]/C[a]+D[a][b]-43;
	        
	       A[a][b]=A[a+2][b]+E[a][b][c]/31;
	      }

    return 0;
}