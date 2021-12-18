#include <iostream>
using namespace std;
int main() {
    cout<<"Enter Total no. of students in CSE : "<<endl;
    int M;
    cin>>M;

    int An;
    cout<<"Enter no. of students who play Cricket : "<<endl;
    cin>>An;

    int Bn;
    cout<<"Enter no. of students who play Badminaton : "<<endl;
    cin>>Bn;
    
    int A[An];
    cout<<"Enter roll no. of students who play Cricket : "<<endl;
    for (int i=0; i<An; i++){
      cin>>A[i];
    }

    int B[Bn];
    cout<<"Enter roll no. of students who play Badminton : "<<endl;
    for (int j=0; j<Bn; j++){
      cin>>B[j];
    }

    cout<<"Set of students who play either cricket or badminton or both : ";
    int N=0;
    for (int i=0; i<An; i++){
      for (int j=0; j<Bn; j++){
        if(A[i]==B[j]){
          N++;
        }
      }
    }
    cout<<An+Bn-N<<endl;

    cout<<"Set of students who play both cricket and badminton : ";
    cout<<N<<endl;

    cout<<"Set of students who play only cricket : ";
    cout<<An-N<<endl;

    cout<<"Set of students who play only badminton : ";
    cout<<Bn-N<<endl;

    cout<<"Set of students who play neither cricket nor badminton : ";
    cout<<M-An+Bn-N<<endl;

}