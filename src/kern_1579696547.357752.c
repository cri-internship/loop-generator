#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***E = create_three_dim_double(600, 900, 40, "ones");
	double ***C = create_three_dim_double(40, 290, 780, "ones");
	double *B = create_one_dim_double(580, "ones");
	double ***A = create_three_dim_double(310, 400, 610, "ones");
	double *D = create_one_dim_double(470, "ones");

	for (int c = 5; c < 35; c++)
	  for (int b = 3; b < 400; b++)
	    for (int a = 4; a < 310; a++)
	    {
	      
	      A[a][b][c]=A[a-4][b-3][c-5]*0.233;
	      
	      E[a][b][c]=0.997;
	      E[a+1][b+3][c+5]=0.171;
	      
	      C[a][b][c]=B[a]-A[a][b][c]*C[a][b][c]+D[a]/E[a][b][c];
	      B[a]=B[a]+0.399;
	    }

    return 0;
}