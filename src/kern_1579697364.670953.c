#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(820, 270, 320, "zeros");
	int ***A = create_three_dim_int(330, 930, 750, "zeros");
	int ***D = create_three_dim_int(730, 590, 850, "zeros");
	int ***E = create_three_dim_int(40, 320, 520, "zeros");
	int ***B = create_three_dim_int(590, 360, 610, "zeros");

	for (int d = 1; d < 520; d++)
	  for (int c = 0; c < 320; c++)
	    for (int b = 0; b < 40; b++)
	      for (int a = 0; a < 40; a++)
	      {
	        
	       A[a][b][c]=E[a][b][c]-D[a][b][c]*29/C[a][b][c]+A[a][b][c];
	       B[a][b][c]=E[a][b][c-1]*C[a][b][c]+A[a][b][c]-D[a][b][c]/B[a][b][c];
	      }

    return 0;
}