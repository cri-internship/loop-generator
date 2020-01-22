#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(610, 300, 610, "zeros");
	double *B = create_one_dim_double(300, "zeros");
	double ***A = create_three_dim_double(800, 310, 270, "zeros");
	double **D = create_two_dim_double(890, 540, "zeros");
	double **E = create_two_dim_double(650, 450, "zeros");

	for (int b = 5; b < 298; b++)
	  for (int a = 4; a < 605; a++)
	  {
	    
	     E[a][b]=E[a-1][b-2]-0.516;
	    
	     D[a][b]=D[a-4][b-1]+0.46;
	    
	     D[a][b]=D[a+4][b+2]*A[a][b][a];
	    
	     C[a][b][a]=C[a+3][b+2][a+5]*0.744;
	    
	     A[a][b][a]=A[a+1][b][a]/E[a][b]*B[a]-C[a][b][a]+D[a][b];
	    
	     C[a][b][a]=C[a][b][a]+A[a][b][a];
	     D[a][b]=C[a-1][b-5][a-1]+B[a];
	    
	     A[a][b][a]=D[a][b]/C[a][b][a]*B[a];
	     B[a]=D[a][b-5]*B[a];
	  }

    return 0;
}