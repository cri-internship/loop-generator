#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(300, 410, 630, "zeros");
	int *D = create_one_dim_int(210, "zeros");
	int **B = create_two_dim_int(520, 100, "zeros");
	int **A = create_two_dim_int(660, 450, "zeros");

	for (int d = 3; d < 630; d++)
	  for (int c = 4; c < 410; c++)
	    for (int b = 4; b < 210; b++)
	      for (int a = 4; a < 210; a++)
	      {
	        
	       D[a]=D[a-1]*22;
	        
	       C[a][b][c]=A[a][b]+B[a][b]/D[a];
	       C[a-2][b-4][c-3]=D[a]+B[a][b]*A[a][b];
	        
	       C[a][b][c]=15;
	        
	       D[a]=C[a][b][c]+A[a][b];
	      }

    return 0;
}