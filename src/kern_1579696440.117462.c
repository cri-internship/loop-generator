#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(330, "ones");
	int **D = create_two_dim_int(720, 50, "ones");
	int *B = create_one_dim_int(710, "ones");
	int **C = create_two_dim_int(150, 270, "ones");
	int ***E = create_three_dim_int(510, 410, 460, "ones");

	for (int d = 5; d < 460; d++)
	  for (int c = 0; c < 410; c++)
	    for (int b = 5; b < 510; b++)
	      for (int a = 5; a < 510; a++)
	      {
	        
	       E[a][b][c]=E[a-2][b][c-5]-7;
	        
	       B[a]=38;
	       B[a-5]=48;
	        
	       A[a]=E[a][b][c]-D[a][b]/C[a][b]*A[a]+B[a];
	       E[a][b][c]=E[a-2][b][c-3]-C[a][b]/A[a]+D[a][b];
	      }

    return 0;
}