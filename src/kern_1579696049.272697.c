#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(350, 670, "zeros");
	double **B = create_two_dim_double(100, 780, "zeros");
	double ***E = create_three_dim_double(610, 300, 530, "zeros");
	double *D = create_one_dim_double(500, "zeros");
	double **C = create_two_dim_double(790, 960, "zeros");

	for (int b = 5; b < 300; b++)
	  for (int a = 5; a < 346; a++)
	  {
	    
	     E[a][b][a]=E[a-1][b-5][a-4]*0.109/B[a][b]+C[a][b];
	    
	     A[a][b]=A[a+3][b+5]/0.821;
	    
	     E[a][b][a]=0.778;
	    
	     C[a][b]=0.077;
	     C[a-3][b-5]=0.816;
	    
	     C[a][b]=A[a][b]/D[a];
	     B[a][b]=A[a+4][b+5]/E[a][b][a]+0.649;
	    
	     E[a][b][a]=E[a][b][a]+B[a][b];
	     A[a][b]=E[a-5][b-5][a]*D[a]/C[a][b];
	  }

    return 0;
}