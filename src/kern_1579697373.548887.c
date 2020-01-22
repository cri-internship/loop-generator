#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(780, 460, 430, "zeros");
	double ***B = create_three_dim_double(10, 480, 810, "zeros");

	for (int c = 5; c < 426; c++)
	  for (int b = 3; b < 458; b++)
	    for (int a = 5; a < 10; a++)
	    {
	      
	      A[a][b][c]=A[a+4][b+2][c+4]*B[a][b][c];
	      
	      B[a][b][c]=A[a][b][c];
	      B[a-2][b-3][c-5]=A[a][b][c];
	      
	      double var_a=A[a][b][c]*0.086;
	      double var_b=A[a-5][b-2][c-5]+0.168;
	      
	      double var_c=A[a][b][c]-0.227;
	      double var_d=A[a][b][c-5]+0.794;
	      
	      double var_e=A[a][b][c]-0.833;
	      double var_f=A[a+4][b][c+2]/0.81;
	    }

    return 0;
}