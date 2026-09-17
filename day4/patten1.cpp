# include <iostream>
using namespace std;
int main(){
    // betterful pantten
    int n = 5;
 // Step 1.1: UPPER PART- Focus on the number of rows (outer loop): n rows
    for (int i = 0; i < n; i++) {
        // Step 2.1: Stars- Focus on the number of columns: n-i stars ( columns decreasing in number, so n-i)
        for (int j = 0; j < n-i; j++) {
            // Step 3.1: Printing * in the inner loop till j is less than n-i
            cout<<"* ";
        }

        // Step 2.2 Spaces- Focus on the number of columns: 2*i spaces
        for (int j = 0; j < 2*i; j++) {
            // Step 3.2: Printing spaces in the inner loop till j is less than 2*i
            cout<<"  ";
        }
        
        // Step 2.3: Stars- Focus on the number of columns: n-i stars ( columns decreasing in number, so n-i)
        for (int j = 0; j < n-i; j++) {
            // Step 3.3: Printing * in the inner loop till j is less than n-i
            cout<<"* ";
        }
        cout<<endl;    
   }

    // Step 4: Observing Symmetry: We create a similar but opposite pattern for the lower part

    // Step 1.2: LOWER PART- Focus on the number of rows (outer loop): n rows
    for (int i = 0; i < n; i++) {
        // Step 2.4: Stars- Focus on the number of columns: i+1 stars ( columns increasing in number, so i+1)
        for (int j = 0; j <= i; j++) {
            // Step 3.4: Printing * in the inner loop till j is less than or equals to i
            cout<<"* ";
        }

        // Step 2.5: Spaces- Focus on the number of columns: 2*n - 2*i - 1 spaces
        for (int j = 1; j < (2*n - 2*i) - 1; j++) {
            // Step 3.5: Printing * in the inner loop till j is less than 2*n - 2*i - 1
            cout<<"  ";
        }

        // Step 2.6: Stars- Focus on the number of columns: i+1 stars ( columns increasing in number, so i+1)
        for (int j = 0; j <= i; j++) {
            // Step 3.6: Printing * in the inner loop till j is less than or equals to i
            cout<<"* ";
        }
        cout<<endl;
    }

    for(int i=0;i<2*n-1;i++){
for(int j=0;j<2*n-1;j++){
    int top=i;
    int bottom=j;
    int right=(2*n-2)-j;
    int left = (2*n-2)-i;
    cout << (n-min(min(top,bottom),min(right,left)))<<" ";
}
cout<<endl;
    }
    cout<<"                        "<<endl;
        // Step 1: Focus on the number of rows: 2*n - 1 rows
    for (int i = 0; i < 2*n - 1; i++) {
        // Step 2: Focus on the number of columns: 2*n - 1 columns
        for (int j = 0; j < 2*n - 1; j++) {
            int top = i;
            int bottom = j;
            int right = (2*n - 2) - j;
            int left = (2*n - 2) - i;

            // Step 3: Printing the minimum distance of 4 directions after subtracting it from n
            cout<<(n - min(min(top, bottom), min(left, right)))<<" ";           // As min takes only 2 args at a time
        }
        cout<<endl;
    }

    return 0;
}


