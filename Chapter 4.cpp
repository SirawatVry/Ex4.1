#include <iostream>
#include <string>
using namespace std;
int main()
{
int Age,bmi;
float H,W;
string Gen;
cout << "Enter Age  :";
cin  >> Age;
cout << "Enter Gender Male\\Female:";
cin  >> Gen;
cout << "Enter Height  :";
cin  >> H;
cout << "Enter Weight  :";
cin  >> W;
bmi = W / (H/100*H/100);
cout << "BMI = "<< bmi<<endl;
if (bmi<18.5) cout << "Underweight\n";
else if (bmi<25) cout << "Normal\n";
else if (bmi<30) cout << "Overweight\n";
else if (bmi<40) cout << "Obesity\n";
return(0);
}
