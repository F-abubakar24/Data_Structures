#include<bits/stdc++.h>
using namespace std;

// Memory complexity O(n)
class Array{
private:
    int *arr;
    int cap;
    int siz;
    void increase_siz()
    {
        cap = cap * 2;
        int *tmp = new int[cap];
        for (int i = 0; i < siz; i++)
        {
            tmp[i] = arr[i];
        }
        delete[] arr;
        arr = tmp;
    }


public:
    Array()
    {
        arr = new int[1];
        cap = 1;
        siz = 0;
    }
                // Time complexity O(1)
    void Push_back(int x)
    {
        if(cap == siz)
        {
            increase_siz();
        }
        arr[siz] = x;
        siz++;
    }
                // Time >> O(siz - pos) O(siz)
    void insert_element(int pos, int x)
    {
        if(cap == siz)
        {
            increase_siz();
        }
        for (int i = siz-1; i >= pos; i--)
        {
            arr[i + 1] = arr[i];
        }
        arr[pos] = x;
        siz++;
    }
                // Time O(siz)
    void Print()
    {
        for (int i = 0; i < siz; i++)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
                // Time O(1)
    int getSize()
    {
        return siz;
    }
                // Time O(1)
    int getElement (int idx)
    {
        if(idx >= siz)
        {
            cout << "Error " << idx << "is out of bound!\n";
            return -1;
        }
        return arr[idx];
    }

    // Time O(1)
    void pop_back()
    {
        if(siz == 0)
        {
            cout << "Current size is 0\n";
            return;
        }
        siz--;
    }

    // Time O(siz)
    void Erase(int pos)
    {
        if(pos >= siz)
        {
            cout << "Position dosn't exist.\n";
            return;
        }
        for (int i = pos + 1; i < siz; i++)
        {
            arr[i - 1] = arr[i];
        }
        siz--;
    }

};





int main()
{
    Array a;
    a.Push_back(10);
    a.Push_back(20);
    a.Push_back(30);
    a.Push_back(40);
    a.Push_back(50);
    a.insert_element(1, 4);

    a.Print();

    // cout << a.getSize()<< "\n";
    // for (int i = 0; i < a.getSize(); i++)
    // {
    //     cout << a.getElement(i)<< "\n";
    // }

    a.pop_back();
    a.Print();
    a.pop_back();
    a.Print();

    a.Erase(1);
    a.Print();
    return 0;
}