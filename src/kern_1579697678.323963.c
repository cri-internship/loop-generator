#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***E = create_three_dim_int(130, 10, 280, "zeros");
	int ***B = create_three_dim_int(460, 630, 660, "zeros");
	int *D = create_one_dim_int(650, "zeros");
	int **A = create_two_dim_int(470, 390, "zeros");
	int ***C = create_three_dim_int(610, 660, 780, "zeros");

	for (int d = 5; d < 279; d++)
	  for (int c = 5; c < 6; c++)
	    for (int b = 5; b < 128; b++)
	      for (int a = 5; a < 128; a++)
	      {
	        
	       E[a][b][c]=D[a]*2;
	       E[a+2][b+4][c+1]=48-A[a][b]*C[a][b][c]+D[a];
	        
	       C[a][b][c]=25;
	       C[a-5][b-3][c]=43;
	        
	       int var_a=C[a][b][c]-44;
	       int var_b=C[a-1][b-1][c]+48;
	        
	       B[a][b][c]=C[a][b][c]+E[a][b][c]/E[a][b][c];
	       E[a][b][c]=C[a-4][b-5][c-5]/A[a][b]*D[a]-B[a][b][c];
	        
	       C[a][b][c]=D[a]+28;
	       D[a]=D[a-5]+A[a][b]-C[a][b][c]/B[a][b][c]*E[a][b][c];
	      }

    return 0;
}