#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(520, 650, "ones");
	int **E = create_two_dim_int(440, 250, "ones");
	int **D = create_two_dim_int(700, 810, "ones");
	int **C = create_two_dim_int(730, 620, "ones");
	int ***B = create_three_dim_int(420, 930, 690, "ones");

	for (int c = 3; c < 690; c++)
	  for (int b = 3; b < 246; b++)
	    for (int a = 5; a < 420; a++)
	    {
	      
	      D[a][b]=D[a-3][b]*A[a][b]-B[a][b][c]+C[a][b]/E[a][b];
	      
	      B[a][b][c]=D[a][b];
	      B[a-5][b-3][c-3]=D[a][b];
	      
	      D[a][b]=A[a][b]*E[a][b]+B[a][b][c]-C[a][b];
	      
	      A[a][b]=E[a][b]+B[a][b][c]*C[a][b];
	      C[a][b]=E[a+5][b+4]+36;
	      
	      D[a][b]=A[a][b]-E[a][b]/C[a][b]*D[a][b];
	      B[a][b][c]=A[a+2][b+2]+C[a][b]/D[a][b]*1-E[a][b];
	      
	      int var_a=D[a][b]-24;
	      int var_b=D[a+4][b+5]/0;
	    }

    return 0;
}