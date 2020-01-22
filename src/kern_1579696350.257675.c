#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **E = create_two_dim_double(690, 370, "zeros");
	double *D = create_one_dim_double(380, "zeros");
	double **C = create_two_dim_double(370, 510, "zeros");
	double ***A = create_three_dim_double(30, 120, 730, "zeros");
	double **B = create_two_dim_double(980, 530, "zeros");

	for (int b = 1; b < 120; b++)
	  for (int a = 5; a < 30; a++)
	  {
	    
	     E[a][b]=E[a+5][b+2]*A[a][b][a]/C[a][b]+B[a][b]-D[a];
	    
	     C[a][b]=C[a+3][b]+0.177;
	    
	     A[a][b][a]=0.902;
	     A[a-3][b-1][a-5]=0.21;
	    
	     D[a]=0.597;
	     D[a-2]=0.196;
	    
	     B[a][b]=D[a]/E[a][b]-E[a][b];
	     C[a][b]=D[a+1]/C[a][b]-E[a][b]*A[a][b][a]+B[a][b];
	    
	     double var_a=D[a]+0.958;
	     double var_b=D[a-4]*0.159;
	  }

    return 0;
}