#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(310, 680, 460, "zeros");
	int ***E = create_three_dim_int(960, 590, 550, "zeros");
	int **B = create_two_dim_int(690, 160, "zeros");
	int *A = create_one_dim_int(910, "zeros");
	int ***D = create_three_dim_int(1000, 90, 180, "zeros");

	for (int d = 5; d < 180; d++)
	  for (int c = 5; c < 90; c++)
	    for (int b = 3; b < 310; b++)
	      for (int a = 3; a < 310; a++)
	      {
	        
	       D[a][b][c]=D[a-3][b-5][c-5]/32;
	        
	       C[a][b][c]=C[a][b-3][c-4]+29;
	        
	       B[a][b]=B[a+2][b+4]*2;
	        
	       A[a]=A[a+3]/D[a][b][c]-E[a][b][c]+6;
	        
	       E[a][b][c]=E[a+4][b][c+2]+C[a][b][c];
	      }

    return 0;
}