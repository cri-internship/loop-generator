#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(570, 10, "ones");
	int *D = create_one_dim_int(820, "ones");
	int *A = create_one_dim_int(320, "ones");
	int ***B = create_three_dim_int(240, 520, 570, "ones");

	for (int d = 0; d < 568; d++)
	  for (int c = 5; c < 10; c++)
	    for (int b = 5; b < 239; b++)
	      for (int a = 5; a < 239; a++)
	      {
	        
	       B[a][b][c]=B[a+1][b+3][c+2]-21;
	        
	       C[a][b]=C[a][b]+A[a];
	       A[a]=C[a-5][b-5]/14-B[a][b][c];
	      }

    return 0;
}