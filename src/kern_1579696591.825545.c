#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(120, "ones");
	int *D = create_one_dim_int(580, "ones");
	int **C = create_two_dim_int(820, 580, "ones");
	int ***A = create_three_dim_int(40, 410, 560, "ones");

	for (int d = 0; d < 557; d++)
	  for (int c = 0; c < 410; c++)
	    for (int b = 0; b < 39; b++)
	      for (int a = 0; a < 39; a++)
	      {
	        
	       A[a][b][c]=A[a+1][b][c+3]-C[a][b]*D[a];
	        
	       B[a]=B[a+1]/29;
	        
	       A[a][b][c]=D[a]+43/A[a][b][c];
	      }

    return 0;
}