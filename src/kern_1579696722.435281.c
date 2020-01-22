#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(900, 380, "ones");
	double ***E = create_three_dim_double(60, 20, 180, "ones");
	double **C = create_two_dim_double(90, 780, "ones");
	double **B = create_two_dim_double(610, 890, "ones");
	double ***D = create_three_dim_double(870, 110, 530, "ones");

	for (int b = 5; b < 20; b++)
	  for (int a = 5; a < 58; a++)
	  {
	    
	     D[a][b][a]=D[a-5][b][a-5]-E[a][b][a]/C[a][b];
	    
	     C[a][b]=C[a][b-2]+D[a][b][a]*A[a][b]-B[a][b];
	    
	     A[a][b]=C[a][b];
	     A[a-5][b-5]=0.299+B[a][b]-D[a][b][a]/C[a][b];
	    
	     E[a][b][a]=0.361;
	     E[a+2][b][a]=0.349;
	    
	     B[a][b]=E[a][b][a]*C[a][b]+B[a][b]/D[a][b][a]-A[a][b];
	     D[a][b][a]=E[a-1][b-5][a]*B[a][b]+C[a][b];
	  }

    return 0;
}