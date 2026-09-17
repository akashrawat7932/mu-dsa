# include <iostream>
using namespace std;
int main(){
    int arr[8] = {-10,12,0, 7, 5 , 13, 0 ,2};
    int positve = 0 ;
    int negetive = 0;
    int zero = 0;
    for(int i =0; i<8;i++){
        if(arr[i] > 0){
            positve++;
        }else if(arr[i] < 0){
            negetive++;
        }else{
             zero++;
        }
    }
cout<<"postive : "<<positve<<endl;
cout<<"negetive: "<<negetive<<endl;
cout<<"zero: "<<zero<<endl;
 
    return 0;
}