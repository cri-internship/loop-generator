#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(330, 850, "ones");
	int **C = create_two_dim_int(70, 520, "ones");
	int **D = create_two_dim_int(840, 960, "ones");
	int **A = create_two_dim_int(70, 210, "ones");

	for (int d = 0; d < 206; d++)
	  for (int c = 1; c < 66; c++)
	    for (int b = 1; b < 66; b++)
	      for (int a = 1; a < 66; a++)
	      {
	        
	       D[a][b]=D[a-1][b]+27;
	        
	       D[a][b]=A[a][b]/45;
	        
	       C[a][b]=A[a][b]-D[a][b]+C[a][b]/D[a][b];
	       D[a][b]=A[a+4][b+4]+47;
	        
	       A[a][b]=B[a][b]+D[a][b]/C[a][b];
	       B[a][b]=B[a][b]+D[a][b]-C[a][b]*A[a][b];
	      }

    return 0;
}