#include<iostream>
#include<algorithm>
using namespace std;

typedef struct {
    int row;
    int column;
    int value;
}matrix;
void transpose(matrix a[],matrix b[]){

    b[0]=a[0];
    int count[a[0].column]={};
    for(int i=1;i<=a->value;i++){
        count[a[i].column]++;
    }
    int matrix2[a[0].column]={};
    matrix2[0]=1;
    for(int i=0;i<=a[0].column;a++){
        matrix2[i]=matrix2[i-1]+count[i-1];
    }
    for(int i=1;i<=a[0].value;i++){
        b[matrix2[a[i].column]]=a[i];

        matrix2[a[i].column]++;

    }

}
int main(){

    int row,column,value;
    cin>>row>>column>>value;
    matrix a[value+1];
    matrix b[value+1];
    a[0]={row,column,value};
    for(int i=1;i<value+1;i++){
        cin>>a[i].row>>a[i].column>>a[i].value;
    }
    transpose(a,b);
    for(int i=0;i<value+1;i++){
        cout<<b[i].row<<" "<<b[i].column<<" "<<b[i].value;
    }


}
