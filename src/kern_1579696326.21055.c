#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(10, 370, "zeros");
	double ***B = create_three_dim_double(930, 270, 490, "zeros");

	for (int c = 1; c < 486; c++)
	  for (int b = 5; b < 268; b++)
	    for (int a = 5; a < 5; a++)
	    {
	      
	      B[a][b][c]=B[a-5][b-5][c-1]*0.492;
	      
	      A[a][b]=A[a+5][b]/B[a][b][c];
	      
	      A[a][b]=B[a][b][c];
	      
	      B[a][b][c]=0.471;
	      
	      A[a][b]=A[a][b]*B[a][b][c];
	      B[a][b][c]=A[a+3][b+1]*B[a][b][c];
	    }

    return 0;
}