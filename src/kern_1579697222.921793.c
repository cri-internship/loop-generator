#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(570, 130, 830, "ones");
	double *A = create_one_dim_double(820, "ones");
	double *D = create_one_dim_double(890, "ones");
	double ***C = create_three_dim_double(960, 580, 780, "ones");
	double **E = create_two_dim_double(660, 900, "ones");

	for (int c = 5; c < 895; c++)
	  for (int b = 3; b < 657; b++)
	    for (int a = 3; a < 657; a++)
	    {
	      
	      D[a]=D[a-3]-C[a][b][c]+B[a][b][c]/E[a][b]*A[a];
	      
	      E[a][b]=E[a+3][b+5]/D[a]-A[a]*C[a][b][c]+B[a][b][c];
	      
	      A[a]=A[a+5]*B[a][b][c]+D[a]/C[a][b][c]-E[a][b];
	      
	      double var_a=E[a][b]*0.156;
	      double var_b=E[a-2][b-5]/0.131;
	    }

    return 0;
}