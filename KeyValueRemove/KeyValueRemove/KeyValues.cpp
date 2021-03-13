#include "KeyValues.h"

KeyValues::KeyValues(int n)
{
    this->keyValues = new KeyValue * [n];
    this->count = 0;
}

KeyValues::~KeyValues()
{
    for (int i = 0; i < count; i++)
    {
       delete this->keyValues[i];
       this->keyValues[i] = nullptr;
    }
    delete[] this->keyValues;
}

KeyValue* KeyValues::CreateObject(int k, double v)
{
    KeyValue* newObject = new KeyValue(k, v);
    this->keyValues[this->count] = newObject;
    this->count++;
    return newObject;
}

KeyValue* KeyValues::SearchObject(int k)
{
    for (int i = 0; i < this->count; i++)
    {
        if (this->keyValues[i]->GetKey() == k)
        {
            return this->keyValues[i];
        }
    }
    return nullptr;
}

KeyValue* KeyValues::RemoveObject(int k)
{
    for (int i = 0; i < this->count; i++)
    {
        if (this->keyValues[i]->GetKey() == k)
        {
            delete this->keyValues[i];
            for (int j = i; j < this->count; j++)
            {
                keyValues[j] = keyValues[j + 1];
            }
            keyValues[this->count-1] == nullptr;
            this->count--;
        }
    }

    return nullptr;
}

int KeyValues::GetCount()
{
    return this->count;
}
