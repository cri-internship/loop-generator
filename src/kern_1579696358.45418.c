#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **D = create_two_dim_int(770, 280, "zeros");
	int **B = create_two_dim_int(590, 480, "zeros");
	int ***C = create_three_dim_int(680, 640, 960, "zeros");
	int **A = create_two_dim_int(40, 30, "zeros");

	for (int c = 5; c < 30; c++)
	  for (int b = 5; b < 40; b++)
	    for (int a = 5; a < 40; a++)
	    {
	      
	      A[a][b]=A[a-4][b-2]/14;
	      
	      B[a][b]=B[a-5][b-5]/C[a][b][c]+D[a][b]*A[a][b];
	      
	      B[a][b]=26;
	      
	      A[a][b]=30/B[a][b];
	      
	      B[a][b]=B[a][b]*C[a][b][c];
	      D[a][b]=B[a-1][b-1]+46/D[a][b];
	    }

    return 0;
}