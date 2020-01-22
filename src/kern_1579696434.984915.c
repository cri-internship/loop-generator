#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(450, 270, 70, "random");
	double **B = create_two_dim_double(280, 230, "random");
	double **E = create_two_dim_double(880, 810, "random");
	double ***A = create_three_dim_double(690, 730, 70, "random");
	double *D = create_one_dim_double(880, "random");

	for (int c = 5; c < 67; c++)
	  for (int b = 4; b < 270; b++)
	    for (int a = 5; a < 450; a++)
	    {
	      
	      C[a][b][c]=C[a-1][b-4][c-1]-B[a][b]*0.137;
	      
	      E[a][b]=E[a-5][b-4]*A[a][b][c]+D[a]/C[a][b][c];
	      
	      A[a][b][c]=A[a-3][b-1][c-5]-E[a][b];
	      
	      A[a][b][c]=A[a+1][b+5][c+3]-0.563;
	      
	      E[a][b]=E[a+4][b+2]+0.725;
	    }

    return 0;
}