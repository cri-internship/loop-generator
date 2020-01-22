#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(530, 500, "random");
	int ***D = create_three_dim_int(860, 950, 480, "random");
	int *A = create_one_dim_int(410, "random");
	int ***E = create_three_dim_int(520, 60, 290, "random");
	int ***C = create_three_dim_int(330, 250, 890, "random");

	for (int d = 4; d < 890; d++)
	  for (int c = 5; c < 250; c++)
	    for (int b = 5; b < 330; b++)
	      for (int a = 5; a < 330; a++)
	      {
	        
	       C[a][b][c]=C[a-3][b-4][c-4]-45;
	        
	       B[a][b]=26;
	       B[a+1][b]=44;
	        
	       A[a]=B[a][b]*A[a]+E[a][b][c]/C[a][b][c];
	       E[a][b][c]=B[a-5][b-5]/D[a][b][c]*C[a][b][c]+A[a];
	      }

    return 0;
}