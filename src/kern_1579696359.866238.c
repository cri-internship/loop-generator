#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **E = create_two_dim_double(270, 400, "random");
	double ***A = create_three_dim_double(410, 550, 650, "random");
	double **B = create_two_dim_double(420, 390, "random");
	double ***C = create_three_dim_double(620, 10, 210, "random");
	double ***D = create_three_dim_double(590, 380, 810, "random");

	for (int c = 4; c < 650; c++)
	  for (int b = 4; b < 379; b++)
	    for (int a = 5; a < 265; a++)
	    {
	      
	      A[a][b][c]=A[a-5][b-4][c-4]*0.432;
	      
	      E[a][b]=E[a][b+4]/0.055;
	      
	      D[a][b][c]=D[a+2][b+1][c+5]+0.381;
	      
	      double var_a=A[a][b][c]*0.514;
	      double var_b=A[a+4][b][c]*0.649;
	      
	      A[a][b][c]=E[a][b]+D[a][b][c]-C[a][b][c];
	      B[a][b]=E[a+5][b+1]-B[a][b]*A[a][b][c]/D[a][b][c];
	    }

    return 0;
}