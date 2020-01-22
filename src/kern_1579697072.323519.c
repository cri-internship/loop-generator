#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(90, 720, 470, "zeros");
	int *B = create_one_dim_int(660, "zeros");
	int **A = create_two_dim_int(360, 280, "zeros");
	int *E = create_one_dim_int(630, "zeros");
	int *D = create_one_dim_int(950, "zeros");

	for (int d = 0; d < 470; d++)
	  for (int c = 0; c < 280; c++)
	    for (int b = 3; b < 88; b++)
	      for (int a = 3; a < 88; a++)
	      {
	        
	       A[a][b]=A[a-3][b]/C[a][b][c]-E[a]+B[a]*D[a];
	        
	       C[a][b][c]=C[a+2][b+5][c]+A[a][b]*B[a]-A[a][b]/D[a];
	        
	       B[a]=39;
	       B[a-2]=35;
	        
	       B[a]=D[a]+B[a]-E[a]/A[a][b]*C[a][b][c];
	        
	       E[a]=E[a]-20+C[a][b][c]/D[a];
	        
	       int var_a=D[a]+25;
	       int var_b=D[a-3]-48;
	      }

    return 0;
}