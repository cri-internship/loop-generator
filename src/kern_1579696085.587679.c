#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(830, 150, "zeros");
	int **D = create_two_dim_int(150, 50, "zeros");
	int ***E = create_three_dim_int(270, 120, 470, "zeros");
	int **C = create_two_dim_int(860, 690, "zeros");
	int ***B = create_three_dim_int(70, 120, 960, "zeros");

	for (int d = 2; d < 470; d++)
	  for (int c = 5; c < 50; c++)
	    for (int b = 5; b < 150; b++)
	      for (int a = 5; a < 150; a++)
	      {
	        
	       D[a][b]=D[a-1][b-1]-B[a][b][c]/A[a][b];
	        
	       A[a][b]=A[a-4][b]*D[a][b];
	        
	       D[a][b]=D[a-4][b-5]/C[a][b]-E[a][b][c]*B[a][b][c];
	        
	       E[a][b][c]=31;
	       E[a-5][b-5][c-2]=14;
	        
	       int var_a=A[a][b]-11;
	       int var_b=A[a-5][b]-16;
	        
	       E[a][b][c]=C[a][b]/D[a][b]+B[a][b][c]-A[a][b];
	       A[a][b]=C[a][b+5]*A[a][b]/E[a][b][c]-B[a][b][c];
	      }

    return 0;
}