#include <iostream>

using namespace std;

int main()
{
    int n,h;
    cout << "enter number of people " <<'\n';
    cin >> n ;
    cout << "enter the height of the wall ";
    cin >> h;
    int arr[n];
    int sum=0;
    for(int i=0; i<n;i++){
        cout<< "enter the height:";
        cin >> arr[i];
        if(h<arr[i]){
            sum+=2;
        }
        else sum++;
    }
    cout << "the minimum width is" <<'\t' << sum;

    return 0;
}
