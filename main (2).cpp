#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int order;
    float matrix[10][10];
    cout<<"Enter order of matrix (max 10): ";
    cin>>order;
    
    cout<<"Enter matrix elements separated by a space:"<<endl;
    
    int row_index;
    int col_index;
    
    for(row_index=0; row_index<order; row_index++){
        for(col_index=0; col_index<order; col_index++){
            cin>>matrix[row_index][col_index];
        }
    }
    
    cout<<"Your matrix is: "<<endl;
    
    for(row_index=0; row_index<order; row_index++){
        cout<<"| ";
        for(col_index=0; col_index<order; col_index++){
            cout<<matrix[row_index][col_index]<<" ";
        }
        cout<<"|";
        cout<<endl;
    }
    
    cout<<"\nAnd if you want to paste it somewhere, there you go lol :)"<<endl<<endl;
    cout<<"[";
    for(row_index=0; row_index<order; row_index++){
        cout<<"[";
        for(col_index=0; col_index<order; col_index++){
            cout<<matrix[row_index][col_index];
            if(col_index+1<order)
            cout<<" , ";
        }
        cout<<"]";
        if(row_index+1<order)
            cout<<" , ";
    }
    cout<<"]";
    cout<<endl<<"_________________________________________________________________________";
}
