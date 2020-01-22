#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(740, 390, "random");
	int ***D = create_three_dim_int(40, 720, 290, "random");
	int **A = create_two_dim_int(230, 970, "random");
	int *C = create_one_dim_int(370, "random");

	for (int d = 0; d < 389; d++)
	  for (int c = 0; c < 229; c++)
	    for (int b = 0; b < 229; b++)
	      for (int a = 0; a < 229; a++)
	      {
	        
	       B[a][b]=B[a+5][b+1]+A[a][b]*D[a][b][c]-C[a];
	        
	       A[a][b]=A[a+1][b+3]-B[a][b]/D[a][b][c]*C[a];
	      }

    return 0;
}