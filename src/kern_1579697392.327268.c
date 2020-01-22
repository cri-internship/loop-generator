#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(170, 820, 500, "random");
	double *E = create_one_dim_double(560, "random");
	double ***A = create_three_dim_double(90, 850, 260, "random");
	double ***C = create_three_dim_double(110, 330, 980, "random");
	double *D = create_one_dim_double(30, "random");

	for (int c = 3; c < 260; c++)
	  for (int b = 5; b < 327; b++)
	    for (int a = 5; a < 30; a++)
	    {
	      
	      A[a][b][c]=A[a-5][b-4][c-3]+0.382;
	      
	      B[a][b][c]=B[a][b][c+2]-0.843;
	      
	      C[a][b][c]=E[a]-0.407;
	      C[a-4][b-5][c]=D[a]-A[a][b][c];
	      
	      D[a]=C[a][b][c];
	      D[a-5]=E[a]*C[a][b][c];
	      
	      double var_a=E[a]-0.811;
	      double var_b=E[a+2]-0.026;
	      
	      double var_c=E[a]*0.313;
	      double var_d=E[a-2]*0.719;
	      
	      double var_e=C[a][b][c]*0.313;
	      double var_f=C[a][b+3][c]*0.293;
	    }

    return 0;
}