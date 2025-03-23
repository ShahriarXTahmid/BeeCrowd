#include <iostream>
using namespace std;
void reverse(int array[], int len)
{
    int temp = 0;
    for (int i = 0; i < (len / 2); i++)
    {
        temp = array[i];
        array[i] = array[len - i - 1];
        array[len - i - 1] = temp;
    }
}
int main(void)
{
    int n[20];
    for (int i = 0; i < 20; i++)
    {
        cin >> n[i];
    }
    reverse(n, 20);
    for (int k = 0; k < 20; k++)
    {
        cout << "N[" << k << "] = " << n[k] << endl;
    }

    return 0;
}