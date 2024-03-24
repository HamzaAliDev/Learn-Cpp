#include <iostream>
using namespace std;
int main (){
	int A[3][3];
	int B[3][3];
	cout<<"Enter 9 integers for A:"<<endl;
	for(int a=0; a<3; a++)
		for(int b=0; b<=2; b++)
			cin>>A[a][b];
		cout<<endl;
		cout<<"Enter 9 integers for B:"<<endl;
	for(int c=0; c<3; c++)
		for(int d=0; d<=2; d++)
			cin>>B[c][d];
		cout<<endl;
	cout<<"Elements of A:"<<endl;		
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++)
			cout<<A[i][j]<<"\t";
		cout<<endl;
	}
	cout<<endl;
	cout<<"Elements of B:"<<endl;		
	for(int k=0; k<3; k++){
		for(int l=0; l<3; l++)
			cout<<B[k][l]<<"\t";
		cout<<endl;
	}
	
//	part 2
	int C[3][3];
	cout<<endl<<"elements of C:"<<endl;
	for(int m=0; m<3; m++){
		for(int n=0; n<3; n++){
		
			C[m][n] = A[m][n] + B[m][n];
			cout<<C[m][n]<<"\t";
		}
		cout<<endl;
	}
//	part 3
	int D[3][3];
	cout<<endl<<"elements of D:"<<endl;
	for(int m=0; m<3; m++){
		for(int n=0; n<3; n++){
		
			D[m][n] = A[m][n] - B[m][n];
			cout<<D[m][n]<<"\t";
		}
		cout<<endl;
	}
//	part 4
	int E[3][3];
	cout<<endl<<"elements of E:"<<endl;
	for(int m=0; m<3; m++){
		for(int n=0; n<3; n++){
		
			E[m][n] = A[m][n] * B[m][n];
			cout<<E[m][n]<<"\t";
		}
		cout<<endl;
	}
//	part 5
	int F[3][3];
	cout<<endl<<"elements of F:"<<endl;
	for(int m=0; m<3; m++){
		for(int n=0; n<3; n++){
		
			F[m][n] = A[n][m];
			cout<<F[m][n]<<"\t";
//call karsktay ho to karlo otherwise mein likh kar hi btata rahonga 