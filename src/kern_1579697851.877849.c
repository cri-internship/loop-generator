#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(180, 930, 480, "ones");
	int **B = create_two_dim_int(320, 500, "ones");
	int *C = create_one_dim_int(90, "ones");
	int **E = create_two_dim_int(780, 350, "ones");
	int ***D = create_three_dim_int(470, 950, 960, "ones");

	for (int d = 4; d < 960; d++)
	  for (int c = 4; c < 347; c++)
	    for (int b = 5; b < 90; b++)
	      for (int a = 5; a < 90; a++)
	      {
	        
	       D[a][b][c]=D[a-5][b-3][c-1]*A[a][b][c]+E[a][b];
	        
	       C[a]=C[a-3]+D[a][b][c];
	        
	       E[a][b]=E[a-5][b-4]+26;
	        
	       E[a][b]=B[a][b];
	        
	       A[a][b][c]=D[a][b][c]-B[a][b]+35*C[a]/A[a][b][c];
	       D[a][b][c]=D[a][b-2][c-4]+B[a][b]/E[a][b];
	      }

    return 0;
}