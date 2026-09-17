# include<iostream>
using namespace std;
void patten(){
        int n=5;
      for(int i =0;i<=n;i++){
        for(int j=0;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i =0;i<=n;i++){
        for(int j=0;j<=i;j++){
            cout<<" ";
        }
        for(int j=0;j<=n-i-1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }

}
int main(){
patten();
    return 0;
}