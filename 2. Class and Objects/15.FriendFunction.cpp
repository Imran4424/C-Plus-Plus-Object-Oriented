class Accumulator
{

    private: int value;

    public: Accumulator
    {
        value = 0;
    }

    public: void Add(int num)
    {
        value = value + num;
    }

    public: void Show()
    {
        cout <<"Current Value: " << value << endl;
    }

    public: friend void reset(Accumulator &accumulator);
};
 

void reset(Accumulator &obj)
{
    obj.value = 0;
}
 
int main()
{
    Accumulator red;
    red.add(5); // add 5 to the accumulator
    reset(red); // reset the accumulator to 0
 
    return 0;
}