#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(60, 920, 340, "random");
	int ***D = create_three_dim_int(740, 720, 90, "random");
	int ***C = create_three_dim_int(820, 60, 780, "random");
	int *B = create_one_dim_int(770, "random");
	int ***E = create_three_dim_int(140, 610, 280, "random");

	for (int d = 2; d < 90; d++)
	  for (int c = 4; c < 60; c++)
	    for (int b = 3; b < 136; b++)
	      for (int a = 3; a < 136; a++)
	      {
	        
	       D[a][b][c]=D[a-3][b-1][c-2]/44;
	        
	       C[a][b][c]=D[a][b][c];
	       C[a-1][b-4][c-2]=A[a][b][c]/E[a][b][c]-B[a]*E[a][b][c];
	        
	       D[a][b][c]=D[a][b][c]*C[a][b][c]/4;
	       A[a][b][c]=D[a-3][b][c-1]*C[a][b][c]/A[a][b][c]+B[a]-E[a][b][c];
	        
	       int var_a=E[a][b][c]+18;
	       int var_b=E[a+4][b+1][c]+4;
	        
	       C[a][b][c]=B[a]*D[a][b][c]+C[a][b][c]-E[a][b][c];
	       E[a][b][c]=B[a-3]/A[a][b][c]+D[a][b][c];
	        
	       B[a]=E[a][b][c]-A[a][b][c]*D[a][b][c]/B[a]+C[a][b][c];
	       A[a][b][c]=E[a+4][b+1][c+3]/B[a]+C[a][b][c]*A[a][b][c];
	      }

    return 0;
}