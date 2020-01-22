#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(190, 960, "zeros");
	int ***D = create_three_dim_int(140, 580, 60, "zeros");
	int *C = create_one_dim_int(900, "zeros");
	int ***B = create_three_dim_int(780, 840, 140, "zeros");

	for (int d = 0; d < 139; d++)
	  for (int c = 0; c < 837; c++)
	    for (int b = 0; b < 777; b++)
	      for (int a = 0; a < 777; a++)
	      {
	        
	       B[a][b][c]=B[a+3][b+3][c+1]*19;
	        
	       A[a][b]=C[a]*D[a][b][c];
	       C[a]=C[a+5]+A[a][b]*B[a][b][c]-B[a][b][c];
	      }

    return 0;
}