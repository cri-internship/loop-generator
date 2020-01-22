#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***D = create_three_dim_int(330, 330, 130, "ones");
	int ***A = create_three_dim_int(200, 610, 110, "ones");
	int *C = create_one_dim_int(800, "ones");
	int *B = create_one_dim_int(220, "ones");

	for (int d = 0; d < 129; d++)
	  for (int c = 0; c < 325; c++)
	    for (int b = 0; b < 217; b++)
	      for (int a = 0; a < 217; a++)
	      {
	        
	       B[a]=B[a+3]+D[a][b][c]-C[a];
	        
	       B[a]=B[a+2]+A[a][b][c];
	        
	       A[a][b][c]=D[a][b][c]/29*A[a][b][c]+B[a];
	       C[a]=D[a+4][b+5][c+1]-A[a][b][c]+C[a]*B[a];
	      }

    return 0;
}