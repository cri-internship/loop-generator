#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***D = create_three_dim_double(580, 450, 530, "ones");
	double ***A = create_three_dim_double(100, 780, 890, "ones");
	double *B = create_one_dim_double(230, "ones");
	double *E = create_one_dim_double(580, "ones");
	double **C = create_two_dim_double(30, 600, "ones");

	for (int c = 3; c < 530; c++)
	  for (int b = 3; b < 450; b++)
	    for (int a = 4; a < 26; a++)
	    {
	      
	      C[a][b]=C[a-4][b-3]/D[a][b][c]+A[a][b][c]*E[a]-B[a];
	      
	      D[a][b][c]=D[a-4][b-2][c-3]-C[a][b]+0.878;
	      
	      double var_a=A[a][b][c]-0.955;
	      double var_b=A[a][b][c]+0.362;
	      
	      D[a][b][c]=E[a]*D[a][b][c];
	      E[a]=E[a-4]+B[a]*A[a][b][c];
	      
	      double var_c=C[a][b]+0.615;
	      double var_d=C[a+4][b+5]/0.987;
	    }

    return 0;
}