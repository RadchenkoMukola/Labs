#include "UI.h"

using std::cout;
using std::cin;
using std::endl;

int start()
{
    int a[100];
    int n = 0;
    cout << "Enter size of the List -";
    cin >> n;
    cout << endl;
    Listp p = NULL;
    cout << "Enter the elements" << endl;
    p = Head(n);
    /*p = countingsortel(p);*/

    char func;
    char func1;
    do
    {
        cout << "*====================*" << endl;
        cout << "*l     Menu         l*" << endl;
        cout << "*====================*" << endl;
        cout << "*l 1.quicksort      l*" << endl;
        cout << "*l 2.mergesort      l*" << endl;
        cout << "*l 3.insertionsort  l*" << endl;
        cout << "*====================*" << endl;


        cout << "Choice -";
        cin >> func;
        cout << endl;

        if (func == '1')
        {
            cout << "*====================*" << endl;
            cout << "*l     Menu         l*" << endl;
            cout << "*====================*" << endl;
            cout << "*l 1.Growth         l*" << endl;
            cout << "*l 2.Decrease       l*" << endl;
            cout << "*====================*" << endl;
            cout << "Choice -";
            cin >> func1;
            cout << endl;
            if (func1 == '1')
            {
                quicksortel(p);
                Listp a = reverse(p);
                printlist(a);
                return 0;
            }
            if (func1 == '2')
            {
                quicksortel(p);
                printlist(p);
                return 0;
            }
        }
        if (func == '2')
        {
            cout << "*====================*" << endl;
            cout << "*l     Menu         l*" << endl;
            cout << "*====================*" << endl;
            cout << "*l 1.Growth         l*" << endl;
            cout << "*l 2.Decrease       l*" << endl;
            cout << "*====================*" << endl;
            cout << "Choice -";
            cin >> func1;
            cout << endl;
            if (func1 == '1')
            {
                mergesortel(&p);
                printlist(p);
                return 0;
            }
            if (func1 == '2')
            {
                mergesortel(&p);
                Listp a = reverse(p);
                printlist(a);
                return 0;
            }
        }
        if (func == '3')
        {
            cout << "*====================*" << endl;
            cout << "*l     Menu         l*" << endl;
            cout << "*====================*" << endl;
            cout << "*l 1.Growth         l*" << endl;
            cout << "*l 2.Decrease       l*" << endl;
            cout << "*====================*" << endl;
            cout << "Choice -";
            cin >> func1;
            cout << endl;
            if (func1 == '1')
            {
                insertionsortel(&p);
                printlist(p);
                return 0;
            }
            if (func1 == '2')
            {
                insertionsortel(&p);
                Listp a = reverse(p);
                printlist(a);
                return 0;
            }
        }
    } while (true);

    return 0;

}