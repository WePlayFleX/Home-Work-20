#include <iostream>

using namespace std;

void iFun(int iNum3, int iNum4)
{
    int iSum = 0, iTemp = 0;

    if (iNum3 < iNum4)
    {
        iTemp = iNum3 + 1;
        while (iTemp < iNum4)
        {
            iSum += iTemp;
            iTemp++;
        }
        cout << "Sum is - " << iSum << endl;
    }
    else if (iNum3 > iNum4)
    {
        iTemp = iNum4 + 1;
        while (iTemp < iNum3)
        {
            iSum += iTemp;
            iTemp++;
        }
        cout << "Sum is  - " << iSum << endl;
    }
    else
    {
        cout << "Sum is - " << iSum << endl;
    }
}
int main()
{
    int iNum1, iNum2;
    cout << "Enter first number: " << endl;
    cin >> iNum1;
    cout << "Enter second number: " << endl;
    cin >> iNum2;
    iFun(iNum1, iNum2);
    system("pause");
    return 0;
}