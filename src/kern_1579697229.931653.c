#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(560, 970, "zeros");
	double **E = create_two_dim_double(500, 760, "zeros");
	double ***B = create_three_dim_double(250, 960, 470, "zeros");
	double ***D = create_three_dim_double(700, 410, 850, "zeros");
	double ***A = create_three_dim_double(200, 110, 730, "zeros");

	for (int c = 3; c < 470; c++)
	  for (int b = 5; b < 105; b++)
	    for (int a = 3; a < 200; a++)
	    {
	      
	      E[a][b]=E[a][b-5]-0.773;
	      
	      A[a][b][c]=A[a-2][b-4][c-3]/0.21;
	      
	      D[a][b][c]=D[a+3][b+4][c+3]-0.978;
	      
	      B[a][b][c]=B[a][b+1][c]+D[a][b][c]/0.856-A[a][b][c];
	      
	      D[a][b][c]=A[a][b][c]*B[a][b][c]+D[a][b][c];
	      C[a][b]=A[a][b+5][c]*B[a][b][c];
	      
	      E[a][b]=C[a][b]/E[a][b]-B[a][b][c]*A[a][b][c]+D[a][b][c];
	      B[a][b][c]=C[a-3][b-1]-E[a][b]*D[a][b][c]/A[a][b][c]+B[a][b][c];
	    }

    return 0;
}