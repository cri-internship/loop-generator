#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *D = create_one_dim_double(300, "random");
	double **B = create_two_dim_double(970, 150, "random");
	double **E = create_two_dim_double(410, 980, "random");
	double ***C = create_three_dim_double(460, 690, 710, "random");
	double **A = create_two_dim_double(710, 740, "random");

	for (int c = 5; c < 710; c++)
	  for (int b = 3; b < 147; b++)
	    for (int a = 5; a < 295; a++)
	    {
	      
	      C[a][b][c]=C[a-3][b-1][c-5]-D[a];
	      
	      E[a][b]=E[a+2][b]/0.294;
	      
	      C[a][b][c]=C[a+1][b+1][c]/B[a][b]+A[a][b];
	      
	      double var_a=D[a]*0.93;
	      double var_b=D[a+5]*0.697;
	      
	      double var_c=A[a][b]*0.959;
	      double var_d=A[a-5][b-3]-0.934;
	      
	      double var_e=B[a][b]-0.485;
	      double var_f=B[a][b+3]+0.04;
	    }

    return 0;
}