// Lab 8
bool DArray::search(int elemToSearch, int &numOfOperations) const
{
    int first{0};
    int last{numOfElements - 1};
    bool found = false;

    while ((first <= last) && !found)
    {
        int middleIdx = (first + last) / 2;

        if (elemToSearch < a[middleIdx])
        {
            numOfOperations++;
            last = middleIdx - 1;
        } else if (elemToSearch > a[middleIdx])
        {
            numOfOperations++;
            first = middleIdx + 1;
        } else if (elemToSearch == a[middleIdx])
        {
            numOfOperations++;
            found = true;
        }
    }
    return found;
}