#include<iostream>
using namespace std;

class Matrix {
	int rows,cols;
	public:
	int **ptr;
	public:
		Matrix() {
		}
		Matrix(int,int);
		void setData();
		int feasibility(Matrix);
		Matrix multiply(Matrix);
		void display();
};

Matrix::Matrix(int r,int c) {
	int i;
	rows=r; cols=c;
	ptr=new int*[r];
	for(i=0;i<r;i++) {
		ptr[i]=new int[c];
	}
}
void Matrix::setData() {
	int i,j;
	for(i=0;i<rows;i++) {
		for(j=0;j<cols;j++) {
			cin>>ptr[i][j];
		}
	}
}

void Matrix::display() {
	int i,j;
	for(i=0;i<rows;i++) {
		for(j=0;j<cols;j++) {
			cout<<ptr[i][j]<<"\t";
		}
		cout<<endl;
	}
}
int Matrix::feasibility(Matrix m) {
	if(cols==m.rows)
		return 1;
	else
		return 0;
}

Matrix Matrix::multiply(Matrix m4) {
	int i,j,k,sum;
	Matrix m5(rows,m4.cols);
	for(i=0;i<rows;i++) {	
		for(j=0;j<m4.cols;j++) {
			sum=0;
			for(k=0;k<cols;k++) {
				sum=ptr[i][k] * m4.ptr[k][j]+sum;
				m5.ptr[i][j]=sum;
			}	
		}
	}
	return m5;
}


int main() {
	int r1,c1;
	Matrix m3;
	cout<<"Enter the values of row and column for 1st matrix;\n";
	cin>>r1>>c1;
	Matrix m1(r1,c1);
	m1.setData();
	cout<<"Enter the values of row and column for 2nd matrix;\n";
	cin>>r1>>c1;
	Matrix m2(r1,c1);
	m2.setData();
	if(m1.feasibility(m2)) {
		m3=m1.multiply(m2);
		cout<<"Our input Matrices\n";
		m1.display();
		cout<<"\n";
		m2.display();
		cout<<"\n";
		m3.display();		
	}
	else
		cout<<"Enter correct rows and cols";
}

