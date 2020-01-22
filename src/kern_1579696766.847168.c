#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(980, 710, 60, "random");
	double ***D = create_three_dim_double(190, 520, 810, "random");
	double *C = create_one_dim_double(810, "random");
	double ***A = create_three_dim_double(650, 810, 980, "random");
	double ***E = create_three_dim_double(100, 810, 80, "random");

	for (int c = 1; c < 78; c++)
	  for (int b = 4; b < 516; b++)
	    for (int a = 5; a < 97; a++)
	    {
	      
	      D[a][b][c]=D[a-5][b-4][c-1]+B[a][b][c]-C[a];
	      
	      E[a][b][c]=E[a+3][b+5][c+2]*D[a][b][c]/A[a][b][c]-D[a][b][c]+A[a][b][c];
	      
	      double var_a=C[a]*0.044;
	      C[a]=0.043;
	      
	      D[a][b][c]=D[a+1][b][c+3]/0.378-B[a][b][c];
	      
	      C[a]=0.236;
	      
	      double var_b=D[a][b][c]-0.764;
	      double var_c=D[a+4][b+4][c+3]+0.505;
	    }

    return 0;
}