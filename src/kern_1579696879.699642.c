#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(930, 640, 140, "zeros");
	double ***A = create_three_dim_double(760, 700, 730, "zeros");
	double ***D = create_three_dim_double(80, 510, 530, "zeros");
	double **E = create_two_dim_double(390, 410, "zeros");
	double ***C = create_three_dim_double(30, 20, 290, "zeros");

	for (int b = 5; b < 20; b++)
	  for (int a = 5; a < 25; a++)
	  {
	    
	     E[a][b]=E[a-1][b-5]*A[a][b][a]+D[a][b][a];
	    
	     C[a][b][a]=E[a][b]+B[a][b][a];
	     C[a+5][b][a+5]=D[a][b][a]/B[a][b][a]-A[a][b][a];
	    
	     B[a][b][a]=0.159;
	     B[a+3][b+4][a+3]=0.201;
	    
	     A[a][b][a]=A[a][b][a]-C[a][b][a]*D[a][b][a]/C[a][b][a];
	     D[a][b][a]=A[a-5][b-2][a]+D[a][b][a]/B[a][b][a];
	    
	     C[a][b][a]=D[a][b][a]*A[a][b][a]-E[a][b]+C[a][b][a]/B[a][b][a];
	     B[a][b][a]=D[a+5][b+1][a]/E[a][b]*B[a][b][a]+A[a][b][a]-C[a][b][a];
	  }

    return 0;
}