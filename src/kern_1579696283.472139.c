#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(420, 330, 630, "ones");
	int ***B = create_three_dim_int(90, 740, 50, "ones");
	int ***E = create_three_dim_int(550, 660, 240, "ones");
	int ***C = create_three_dim_int(990, 510, 140, "ones");
	int ***D = create_three_dim_int(380, 220, 220, "ones");

	for (int d = 4; d < 140; d++)
	  for (int c = 4; c < 220; c++)
	    for (int b = 5; b < 380; b++)
	      for (int a = 5; a < 380; a++)
	      {
	        
	       E[a][b][c]=E[a-5][b-1][c-4]+A[a][b][c]/34*B[a][b][c]-D[a][b][c];
	        
	       C[a][b][c]=C[a-3][b-1][c]-E[a][b][c]*A[a][b][c]+B[a][b][c]/E[a][b][c];
	        
	       C[a][b][c]=C[a][b+3][c]-D[a][b][c]*A[a][b][c];
	        
	       A[a][b][c]=A[a+3][b+5][c+5]*23;
	        
	       D[a][b][c]=24;
	       D[a-4][b-4][c-1]=15;
	        
	       A[a][b][c]=E[a][b][c]/C[a][b][c]*B[a][b][c];
	        
	       D[a][b][c]=E[a][b][c];
	      }

    return 0;
}