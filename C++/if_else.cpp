# include <iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter your age"<<endl;
    cin>>age;

    if (age > 130 || age<1)
    {
        cout<<"Invalid age";
    }

    else if (age>=18)
    {
        cout<<"You can vote";
    }

    else
    {
        cout<<"You cannot vote";

    }



    return 0;
}
