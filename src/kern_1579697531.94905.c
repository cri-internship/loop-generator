#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(490, 500, 340, "zeros");
	int **D = create_two_dim_int(340, 890, "zeros");
	int *E = create_one_dim_int(370, "zeros");
	int ***C = create_three_dim_int(540, 740, 330, "zeros");
	int ***A = create_three_dim_int(240, 280, 30, "zeros");

	for (int d = 3; d < 30; d++)
	  for (int c = 4; c < 280; c++)
	    for (int b = 3; b < 240; b++)
	      for (int a = 3; a < 240; a++)
	      {
	        
	       D[a][b]=31;
	       D[a+1][b+1]=48;
	        
	       D[a][b]=44;
	        
	       C[a][b][c]=A[a][b][c]+E[a]-C[a][b][c];
	       E[a]=A[a-2][b-3][c-3]*D[a][b];
	        
	       D[a][b]=E[a]-B[a][b][c]+A[a][b][c]*A[a][b][c]/D[a][b];
	       A[a][b][c]=E[a+2]*C[a][b][c]+D[a][b]/A[a][b][c];
	        
	       B[a][b][c]=D[a][b]/11+B[a][b][c];
	       B[a][b][c]=D[a-3][b-2]*49;
	      }

    return 0;
}