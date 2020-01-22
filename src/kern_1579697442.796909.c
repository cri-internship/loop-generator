#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(860, 160, 400, "random");
	int **C = create_two_dim_int(270, 180, "random");
	int ***B = create_three_dim_int(300, 910, 710, "random");
	int ***D = create_three_dim_int(960, 730, 50, "random");
	int *E = create_one_dim_int(10, "random");

	for (int d = 3; d < 396; d++)
	  for (int c = 5; c < 160; c++)
	    for (int b = 5; b < 8; b++)
	      for (int a = 5; a < 8; a++)
	      {
	        
	       B[a][b][c]=B[a-4][b-5][c-1]+C[a][b]*D[a][b][c];
	        
	       A[a][b][c]=A[a-5][b][c-3]-E[a]*B[a][b][c]/D[a][b][c];
	        
	       A[a][b][c]=A[a][b][c+4]*27;
	        
	       E[a]=E[a+2]-15;
	        
	       B[a][b][c]=36;
	      }

    return 0;
}