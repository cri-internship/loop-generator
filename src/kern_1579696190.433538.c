#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***D = create_three_dim_double(500, 350, 110, "ones");
	double ***B = create_three_dim_double(550, 480, 290, "ones");
	double **C = create_two_dim_double(460, 90, "ones");
	double **A = create_two_dim_double(60, 790, "ones");

	for (int c = 2; c < 106; c++)
	  for (int b = 5; b < 87; b++)
	    for (int a = 5; a < 55; a++)
	    {
	      
	      A[a][b]=A[a+5][b+4]/C[a][b];
	      
	      B[a][b][c]=B[a][b+5][c+4]+D[a][b][c]-A[a][b]/A[a][b];
	      
	      B[a][b][c]=0.845;
	      
	      D[a][b][c]=B[a][b][c];
	      D[a-5][b-5][c-2]=B[a][b][c];
	      
	      D[a][b][c]=B[a][b][c];
	      
	      D[a][b][c]=C[a][b]+B[a][b][c]*A[a][b]/D[a][b][c];
	      C[a][b]=C[a+3][b+3]/A[a][b];
	    }

    return 0;
}