#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***E = create_three_dim_double(800, 290, 530, "zeros");
	double ***C = create_three_dim_double(980, 620, 590, "zeros");
	double ***A = create_three_dim_double(910, 160, 190, "zeros");
	double **B = create_two_dim_double(60, 280, "zeros");
	double **D = create_two_dim_double(880, 720, "zeros");

	for (int c = 4; c < 185; c++)
	  for (int b = 5; b < 155; b++)
	    for (int a = 5; a < 58; a++)
	    {
	      
	      A[a][b][c]=A[a-4][b-5][c-4]-0.595;
	      
	      B[a][b]=B[a+2][b]*C[a][b][c]/D[a][b]+A[a][b][c]-E[a][b][c];
	      
	      D[a][b]=B[a][b]+E[a][b][c];
	      D[a+3][b+4]=A[a][b][c]*C[a][b][c];
	      
	      E[a][b][c]=0.52-A[a][b][c]+D[a][b];
	      E[a-5][b-2][c-4]=C[a][b][c]-A[a][b][c]/D[a][b];
	      
	      C[a][b][c]=B[a][b]/D[a][b]+A[a][b][c]*C[a][b][c]-E[a][b][c];
	      B[a][b]=B[a][b+4]-A[a][b][c]*D[a][b]/C[a][b][c]+E[a][b][c];
	      
	      D[a][b]=C[a][b][c]*E[a][b][c]+A[a][b][c];
	      A[a][b][c]=C[a+4][b+3][c+1]+E[a][b][c]-D[a][b]/A[a][b][c];
	      
	      double var_a=A[a][b][c]/0.505;
	      double var_b=A[a+3][b+5][c+5]/0.216;
	    }

    return 0;
}