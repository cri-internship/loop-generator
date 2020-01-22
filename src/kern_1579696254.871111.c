#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(790, 350, "zeros");
	double ***B = create_three_dim_double(960, 930, 90, "zeros");

	for (int c = 0; c < 86; c++)
	  for (int b = 5; b < 348; b++)
	    for (int a = 2; a < 790; a++)
	    {
	      
	      A[a][b]=A[a-2][b-5]/B[a][b][c];
	      
	      A[a][b]=0.399;
	      
	      B[a][b][c]=0.165;
	      B[a+1][b+1][c+4]=0.402;
	      
	      A[a][b]=A[a][b]+B[a][b][c];
	      B[a][b][c]=A[a-1][b-2]-B[a][b][c];
	    }

    return 0;
}