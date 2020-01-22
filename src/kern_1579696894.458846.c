#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(350, "random");
	int **E = create_two_dim_int(880, 310, "random");
	int **A = create_two_dim_int(320, 330, "random");
	int ***D = create_three_dim_int(970, 760, 750, "random");
	int **B = create_two_dim_int(730, 780, "random");

	for (int d = 5; d < 750; d++)
	  for (int c = 5; c < 310; c++)
	    for (int b = 3; b < 317; b++)
	      for (int a = 3; a < 317; a++)
	      {
	        
	       C[a]=C[a+2]-37;
	        
	       A[a][b]=C[a];
	       A[a+3][b+5]=B[a][b]-E[a][b]*D[a][b][c]/D[a][b][c];
	        
	       D[a][b][c]=C[a];
	       D[a-1][b-5][c-1]=A[a][b]-C[a]+B[a][b]*E[a][b];
	        
	       E[a][b]=D[a][b][c]+B[a][b]/15;
	       E[a-3][b-4]=6+C[a];
	        
	       D[a][b][c]=C[a]-31;
	      }

    return 0;
}