#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(60, 340, 870, "random");
	int ***B = create_three_dim_int(480, 970, 420, "random");
	int **A = create_two_dim_int(50, 180, "random");
	int *D = create_one_dim_int(330, "random");

	for (int d = 0; d < 420; d++)
	  for (int c = 0; c < 175; c++)
	    for (int b = 0; b < 47; b++)
	      for (int a = 0; a < 47; a++)
	      {
	        
	       A[a][b]=A[a][b+1]-C[a][b][c];
	        
	       B[a][b][c]=B[a][b+3][c]+13;
	        
	       A[a][b]=A[a+1][b+3]/36;
	        
	       A[a][b]=A[a+3][b+5]*D[a];
	        
	       C[a][b][c]=13;
	       C[a+5][b][c]=14;
	      }

    return 0;
}