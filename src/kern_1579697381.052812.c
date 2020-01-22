#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(750, "random");
	double **D = create_two_dim_double(450, 690, "random");
	double ***A = create_three_dim_double(280, 890, 920, "random");
	double ***C = create_three_dim_double(570, 240, 780, "random");

	for (int c = 3; c < 780; c++)
	  for (int b = 5; b < 240; b++)
	    for (int a = 5; a < 278; a++)
	    {
	      
	      D[a][b]=D[a-4][b-5]*0.099;
	      
	      D[a][b]=D[a+1][b+5]-B[a]+A[a][b][c];
	      
	      B[a]=0.927;
	      B[a+1]=0.16;
	      
	      double var_a=C[a][b][c]*0.894;
	      double var_b=C[a-5][b-4][c-3]-0.156;
	      
	      double var_c=A[a][b][c]/0.15;
	      double var_d=A[a+2][b+4][c]/0.521;
	      
	      double var_e=B[a]+0.732;
	      double var_f=B[a-5]-0.841;
	    }

    return 0;
}